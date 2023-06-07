#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_strncpy - check the code
 * @dest : input
 * @src : input
 * @n : input
 * Description: copies string
 * Return: total
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest, *clear = src;
	int len = 0, x = 0;

	while (*src)
	{
		src++;
		len++;
	}

	len++;

	if (n > len)
		n = len;

	src = clear;

	for (; x < n; x++)
		*dest++ = *src++;

	return (temp);
}
