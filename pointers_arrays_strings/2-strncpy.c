#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_strncpy - check the code
 * @dest : input
 * @src : input
 * @n : input
 * Description: copies two strings
 * Return: total
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
