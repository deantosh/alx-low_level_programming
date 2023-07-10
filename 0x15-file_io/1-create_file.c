#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to create.
 * @text_content: The content to write to  file.
 *
 * Return: 1 (Success) and -1 fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw, cnt;

	/*get length of the string*/
	cnt = str_len(text_content);

	if (filename == NULL)
		return (-1);

	/*create a file*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/*write into the file*/
	fw = write(fd, text_content, cnt);
	if (fw == -1)
		return (-1);

	/*close file*/
	close(fd);

	return (1);
}

/**
 * str_len - Gets the string length.
 * @str: A pointer to the string.
 *
 * Return: The length.
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
