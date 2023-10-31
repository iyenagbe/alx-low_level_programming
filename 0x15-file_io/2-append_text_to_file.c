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
	int fd;
	int rwr;
	int nletters;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
