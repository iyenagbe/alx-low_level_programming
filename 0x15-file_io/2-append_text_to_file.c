#include "main.h"

/**
 * append_text_to_file - a function that appends text at
 * the end of a file
 * @filename: the created filename
 * @text_content: copied content into a file
 * Return: always success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, fd;

	if (!filename)
		return (-1);

	if (text_content != NULL)
		return (1);
	{

		for (a = 0; text_content[a];)
			a++;
	}

	else
		a = 0;
	fd = open(filename, O_WRONLY | O_APPEND);
	write(fd, text_content, a);

	if (fd == -1)
		return (-1);
	close(fd);
	return (1);

}
