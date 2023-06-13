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
*	int x, y, ct = 0;
*
*	for (x = 0; s[x]; x++)
*	{
*		int match = 0;
*
*		for (y = 0; accept[y]; y++)
*		{
*			if (s[x] == accept[y])
*			{
*				match = 1;
*				break;
*			}
*		}
*		if (match == 0)
*		{
*			break;
*		}
*		ct++;
*	}
*
*	return (ct);
*
*	char *res = accept;
*/
	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		s++;
	}
	return (0);
}
