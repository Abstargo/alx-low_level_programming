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
	char *buffer;
	ssize_t fn;
	ssize_t s;
	ssize_t t;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fn, buffer, letters);
	s = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fn);
	return (s);
}
