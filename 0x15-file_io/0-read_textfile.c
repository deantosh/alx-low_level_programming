/*
 * File: 0-read_textfile.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"
#include <stdio.h>
#include <sys/types.h>

/**
 * read_textfile - Reads a specified number of characters from a text file.
 * @filename: The name of the text file.
 * @letters: The number of characters to read from file.
 *
 * Return: The number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, byte_count;
	char *buf;

	if (filename == NULL)
		return (0);

	/*allocate memory to buffer*/
	buf = malloc(sizeof(char *) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
		return (0);

	byte_count = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, byte_count);
	free(buf);
	close(fd);

	return (byte_count);
}
