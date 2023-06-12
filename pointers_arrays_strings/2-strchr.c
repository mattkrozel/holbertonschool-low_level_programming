#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_strchr - check the code
 * @s : input
 * @c : input
 * Description: locates character c in string s
 * Return: total
 */
char *_strchr(char *s, char c)
{
/*
 *	int i;
 *
 *	for (i = 0; s[i] ; i++)
 *	{
 *		if (s[i] == c)
 *			return (s + i);
 *	}
 *	if (s[i] == c)
 *		return (s + i);
 *	return (0);
*/

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (0);
}
