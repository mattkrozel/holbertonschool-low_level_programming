#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_memset - check the code
 * @s : input
 * @b : input
 * @n : input
 * Description: fills memory of s with b n times
 * Return: total
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ret = s;
	unsigned int i = 0;

	for (; i <= n ; i++)
		s[i] = b;

	return (ret);
}
