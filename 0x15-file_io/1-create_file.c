#include "main.h"

/**
 * create_file - Creates a function that creates a file
 * @filename: pointer to file
 * @text_content: a NULL terminated string to write to the file
 * Return: 0, 1 0r -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, count, num_wr;
	char *emp = "";

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (0);
	for (count = 0; text_content[count] != '\0'; count++)
		;
	if (*text_content == '\0')
		num_wr = write(STDOUT_FILENO, &emp, 1);
	else
		num_wr = write(STDOUT_FILENO, text_content, count);
	if (num_wr == -1)
		return (-1);
	return (1);
}
