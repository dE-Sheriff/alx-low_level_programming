#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: pointer to file
 * @letters: is the number of letters it should read and print
 * Return: ssize_t
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	ssize_t num_rd, num_wr;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR, 777);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);
	num_rd = read(fd, str, letters);
	num_wr = write(STDOUT_FILENO, str, num_rd);
	close(fd);
	free(str);
	return (num_wr);
}
