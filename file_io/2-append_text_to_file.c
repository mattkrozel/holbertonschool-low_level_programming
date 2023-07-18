#include "main.h"

/**
 * append_text_to_file - function that appends text at end of a file
 * @filename: input
 * @text_content: input
 * Return: 1 or 0
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int open_file;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);
	if (text_content != NULL)
		len = write(open_file, text_content, strlen(text_content));
	close(open_file);

	if (len == -1)
		return (-1);

	return (1);
}
