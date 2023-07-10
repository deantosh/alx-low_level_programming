#include "main.h"

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
	char *buff;

	if (filename == NULL)
		return (0);

	/*allocate memory to buffer*/
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
		return (0);

	byte_count = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, byte_count);
	free(buff);
	close(fd);

	return (byte_count);
}
