/*
 * File: 3-cp.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"

/**
 * main - Main entry point.
 * @argc: The argument count.
 * @argv: The arguments passed to the program.
 *
 * Return: Always (0) Success.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*copy content*/
	copy_file(argv[1], argv[2]);

	return (0); /*success*/
}

/**
 * copy_file - Copies the content of one file to another file.
 * @src: The source file.
 * @dest: The file to copy content to.
 *
 * Return: void.
 */
void copy_file(char *src, char *dest)
{
	int fd_s, fd_d, r_bytes;
	char buff[1024];

	fd_s = open(src, O_RDONLY);
	if (!src || fd_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd_d = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r_bytes = read(fd_s, buff, 1024)) > 0)
	{
		if (write(fd_d, buff, r_bytes) != r_bytes || fd_d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(fd_s) == -1)
	{
		printf("Error: Can't close fd %d", fd_s);
		exit(100);
	}

	if (close(fd_d) == -1)
	{
		printf("Error: Can't close fd %d", fd_d);
		exit(100);
	}
}
