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
	int str = 0, str_d = 0;

	while (src[str] && str < n)
	{
		dest[str_d++] = src[str++];
	}

	return (dest);
}
