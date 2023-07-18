#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: input
 * @text_content: input
 * Return: nothing
 */

int create_file(const char *filename, char *text_content)
{

	int open;

	if (filename == NULL)
		return (-1);

	open = open(filename, O_WRONLY | O_CREAT | O_TRUNC | 0600);
	if (open == -1)
		return (-1);

	if (text_content)
	{
		if (write(open, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(open);
	return (1);
}
