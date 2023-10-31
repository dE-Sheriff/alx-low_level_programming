#include "main.h"

/**
 * append_text_to_file -  a function that
 * appends text at the end of a file
 * @filename: pointer to file
 * @text_content: a NULL terminated string to write to the file
 * Return: 0, 1 0r -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[i] != 0)
	{
		i++;
	}

	i = write(fd, text_content, i);
	close(fd);

	if (i == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
