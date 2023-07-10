#include "main.h"

/**
 * append_text_to_file - Appends a text at the end of a file.
 * @filename: The file to write content to.
 * @text_content: The content to append to file.
 *
 * Return: 1 (Success) and -1 (Fails).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cnt;

	/*get length of the str*/
	cnt = str_len(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND,  S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, cnt);
	else
		return (-1);

	return (1);
}

/**
 * str_len - Gets the length of a string.
 * @str: A pointer to the string.
 *
 * Return: length of the string.
 */

int str_len(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
