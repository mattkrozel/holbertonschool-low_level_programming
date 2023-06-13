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
	char *resn = needle, *resh = haystack;

	while (*haystack)
	{
		resh = haystack;
		needle = resn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = resh + 1;
	}
	return (NULL);
}
