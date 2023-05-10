/*
 * File: 3-cp.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"

/**
 * main - Main entry point.
 * @ac: The argument count.
 * @av: The arguments passed to the program.
 *
 * Return: Always (0) Success.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*copy content*/
	copy_file(av[1], av[2]);

	return (0);
}

/**
 * copy_file - Copies the content of one file to another file.
 * @first_file: The file to copy content from.
 * @second_file: The file to copy content to.
 *
 * Return: void.
 */
void copy_file(char *first_file, char *second_file)
{
	int fd_one, fd_two, c_one, c_two;
	char *buff;

	if (!first_file)
	{
		dprintf(2, "Error: Can't read from file %s\n", first_file);
		exit(98);
	}

	/*create buffer*/
	buff = malloc(sizeof(char *) * 8);
	if (!buff)
	{
		dprintf(2, "Failed to create buffer!");
		exit (10);
	}

	/*open a file for reading*/
	fd_one = open(first_file, O_RDONLY);
	if (fd_one == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", first_file);
		exit(98);
	}

	/*open another file for writing*/
	fd_two = open(second_file,
				O_WRONLY | O_CREAT | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_two == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", second_file);
		exit(99);
	}

	/*read from first_file and write to second_file*/
	while (read(fd_one, buff, 1024))
	{
		write(fd_two, buff, 1024);
	}

	c_one = close(fd_one);
	if (c_one == -1)
	{
		printf("Error: Can't close fd %d", fd_one);
		exit(100);
	}

	c_two = close(fd_two);
	if (c_two == -1)
	{
		printf("Error: Can't close fd %d", fd_two);
		exit(100);
	}
}
