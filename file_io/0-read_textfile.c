#include "main.h"

/**
 * read_textfile - a funnction that reads text file and
 * prints to POSIX STDOUT
 * @filename: input
 * @letters: input
 * Return: nothing
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int o, r, w;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o < 0)
	{
		free(temp);
		return (0);
	}

	r = read(o, temp, letters);
	if (r < 0)
	{
		free(temp);
		return (0);
	}

	w = write(STDOUT_FILENO, temp, r);
	free(temp);
	close(o);

	if (w < 0)
		return (0);
	return ((ssize_t)w);
}
