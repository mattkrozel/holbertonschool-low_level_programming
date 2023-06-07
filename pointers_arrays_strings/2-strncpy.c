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
	int str = 0, len = 0;

	while (src[len])
		len++;

	for (; src[str] && str < n; str++)
		dest[str] = src[str];

	for (str = len; str < n; str++)
		dest[str] = '\0';

	return (dest);

}
