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
	int fd, i = 0;
	size_t cnt = 0;

	/*get length of the string*/
	while (text_content[i] != '\0')
	{
		cnt++;
		i++;
	}

	if (filename == NULL)
		return (-1);

	/*create a file*/
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC,  S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, cnt);

	close(fd);
	return (1);
}
