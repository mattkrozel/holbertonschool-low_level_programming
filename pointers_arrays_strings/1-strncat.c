#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_strncat - check the code
 * @dest : input
 * @src : input
 * @n : input
 * Description: concatenates two strings
 * Return: total
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest, *clear = src;
	int len = 0, x = 0;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = clear;

	for (; x < n; x++)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
