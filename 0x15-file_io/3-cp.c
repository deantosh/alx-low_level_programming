#include "main.h"

/**
 * main - Main entry point.
 * @argc: The argument count.
 * @argv: The arguments passed to the program.
 *
 * Return: void
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
 * @src_file: The file to copy content from.
 * @dest_file: The file to copy content to.
 *
 * Return: void.
 */
void copy_file(char *src_file, char *dest_file)
{
	int fd_s, fd_d, r_bytes;
	char buff[1024]; /*buffer*/

	fd_s = open(src_file, O_RDONLY);
	if (!src_file || fd_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}

	fd_d = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r_bytes = read(fd_s, buff, 1024)) > 0)
	{
		if (write(fd_d, buff, r_bytes) != r_bytes || fd_d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}

	if (close(fd_s) == -1)
	{
		printf("Error: Can't close fd %s", fd_s);
		exit(100);
	}

	if (close(fd_d) == -1)
	{
		printf("Error: Can't close fd %s", fd_d);
		exit(100);
	}
}
