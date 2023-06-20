#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_memcpy - check the code
 * @dest : input
 * @src : input
 * @n : input
 * Description: copies memory area
 * Return: total
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret = dest;
	unsigned int i = 0;

	for (; i < n ; i++)
		dest[i] = src[i];

	return (ret);
}
