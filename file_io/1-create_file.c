#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: input
 * @text_content: input
 * Return: nothing
 */

int create_file(const char *filename, char *text_content)
{

	int open_file;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (open_file == -1)
		return (-1);

	if (text_content)
	{
		if (write(open_file, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(open_file);

	return (1);
}
