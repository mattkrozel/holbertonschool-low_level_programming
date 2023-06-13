#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_strpbrk - check the code
 * @s : input
 * @accept : input
 * Description: searches a string for any of a set of bytes
 * Return: total
 */
char *_strpbrk(char *s, char *accept)
{
	/*
*	int x, y;
*
*	for (x = 0; s[x]; x++)
*	{
*		for (y = 0; accept[y]; y++)
*		{
*			if (s[x] == accept[y])
*				return (s + x);
*		}
*	}
*	return (0);
*/
	char *res = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = res;
		s++;
	}
	return (0);
}
