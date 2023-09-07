#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and prints it to
 * POSIX stdout.
 * @filename: Name of the file to read.
 * @letters: Number of letters it should read and print.
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the
 * expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_count, write_count, total_letters = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	while ((read_count = read(file_descriptor, buffer, sizeof(buffer))) > 0)
	{
		write_count = write(STDOUT_FILENO, buffer, read_count);
		if (write_count != read_count)
		{
			close(file_descriptor);
			return (0);
		}
		total_letters += write_count;
		if ((size_t)total_letters >= letters)
			break;
	}

	close(file_descriptor);
	return (total_letters);
}
