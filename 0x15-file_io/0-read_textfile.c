#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 *
 * @filename: the file to be read
 * @letters: number of characters in a file
 * Return: number of letters that is printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nread = read(fd, buff, letters);
	nwritten = write(STDOUT_FILENO, buff, nread);

	close(fd);
	free(buff);

	return (nwritten);
}
