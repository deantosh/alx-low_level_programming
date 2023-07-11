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
	int fd, fw, cnt = 0;

	/*get length of the str*/
	if (text_content != NULL)
	{
		while (text_content[cnt])
			cnt++;
	}

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND,  S_IRUSR | S_IWUSR);
	fw = write(fd, text_content, cnt);
	if (fd == -1 || fw == -1)
		return (-1);

	return (1);
}
