#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *leet - Check main
 * @s: input
 * Description: encodes a string into 1337 replacing some letters with numbers
 * Return: results
 */

char *leet(char *s)
{
	int l = 0, c;
	char a1[] = "AaEeOoTtLl";
	char a2[] = "4433007711";

	while (s[l])
	{
		for (c = 0; a1[c]; c++)
		{
			if (s[l] == a1[c])
			{
				s[l] = a2[c];
				l++;
			}
			l++;
		}
	}
	return (s);
}
