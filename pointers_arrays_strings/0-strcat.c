#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_strcat - check the code
 * @dest : input
 * @src : input
 * Description: concatenates two strings
 * Return: total
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (dest);
}
