#include <stdio.h>
#include "main.h"

/**
 * *_strstr - check the code
 * @haystack : input
 * @needle : input
 * Description: locates a substring, finds first occurence of string needle
 * Return: total
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y] && (haystack[x] == needle[0]))
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else
			return (haystack + x);
	}
	return (0);
}
