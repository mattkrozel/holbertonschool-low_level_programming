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
	char *ret = &c;
	int i = 0;
	char l;

	for (; s[i] ; i++)
	{
		if (s[l] == s[c])
			return (ret);
	}

	return (0);
}
