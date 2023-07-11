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
	int fd, fw, cnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[cnt])
			cnt++;
	}

	/*create a file and write into it*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fw = write(fd, text_content, cnt);
	if (fd == -1 || fw == -1)
		return (-1);

	/*close file*/
	close(fd);

	return (1);
}
