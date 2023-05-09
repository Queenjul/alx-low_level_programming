#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters printed
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int j, p;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	buf[j] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, buf, j);
	if (p < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (p);
}
