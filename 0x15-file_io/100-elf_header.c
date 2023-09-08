#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf_header(unsigned char *e_ident);
void read_elf_header(int elf_fd, Elf64_Ehdr *header);
void print_elf_info(Elf64_Ehdr *header);

void check_elf_header(unsigned char *e_ident) {
    int index;

    for (index = 0; index < 4; index++) {
        if (e_ident[index] != 127 &&
            e_ident[index] != 'E' &&
            e_ident[index] != 'L' &&
            e_ident[index] != 'F') {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

void read_elf_header(int elf_fd, Elf64_Ehdr *header) {
    ssize_t read_result;
    
    if (lseek(elf_fd, (off_t)0, SEEK_SET) == -1) {
        dprintf(STDERR_FILENO, "Error: Unable to lseek\n");
        exit(98);
    }

    read_result = read(elf_fd, header, sizeof(Elf64_Ehdr));
    if (read_result == -1) {
        dprintf(STDERR_FILENO, "Error: Unable to read ELF header\n");
        exit(98);
    }

    if (read_result != sizeof(Elf64_Ehdr)) {
        dprintf(STDERR_FILENO, "Error: Incomplete ELF header read\n");
        exit(98);
    }
}

void print_elf_info(Elf64_Ehdr *header) {
    int i;

    printf("  %-35s ", "Magic:");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x", header->e_ident[i]);
        if (i < EI_NIDENT - 1)
            printf(" ");
    }
    printf("\n");

    printf("  %-35s ", "Class:");
    switch (header->e_ident[EI_CLASS]) {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
    }

    printf("  %-35s ", "Data:");
    switch (header->e_ident[EI_DATA]) {
    case ELFDATANONE:
        printf("none\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
    }

    printf("  %-35s %d", "Version:", header->e_ident[EI_VERSION]);
    if (header->e_ident[EI_VERSION] == EV_CURRENT)
        printf(" (current)\n");
    else
        printf("\n");

    printf("  %-35s ", "OS/ABI:");
    switch (header->e_ident[EI_OSABI]) {
    case ELFOSABI_NONE:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("UNIX - Solaris\n");
        break;
    case ELFOSABI_IRIX:
        printf("UNIX - IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("UNIX - FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("UNIX - TRU64\n");
        break;
    case ELFOSABI_ARM:
        printf("ARM\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone App\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
    }

    printf("  %-35s %d\n", "ABI Version:", header->e_ident[EI_ABIVERSION]);

    printf("  %-35s ", "Type:");
    switch (header->e_type) {
    case ET_NONE:
        printf("NONE (None)\n");
        break;
    case ET_REL:
        printf("REL (Relocatable file)\n");
        break;
    case ET_EXEC:
        printf("EXEC (Executable file)\n");
        break;
    case ET_DYN:
        printf("DYN (Shared object file)\n");
        break;
    case ET_CORE:
        printf("CORE (Core file)\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_type);
    }

    printf("  %-35s %#lx\n", "Entry point address:", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    int elf_fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    elf_fd = open(argv[1], O_RDONLY);
    if (elf_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        return (98);
    }

    read_elf_header(elf_fd, &header);
    check_elf_header(header.e_ident);
    print_elf_info(&header);

    close(elf_fd);
    return (0);
}
