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
	int l = 0;
	char a1[] = "AaEeOoTtLl";
	char a2[] = "4433007711";

	while (s[l])
	{
		if (s[l] == a1[])
		{
			s[l] = a2[l];
			l++;
		}
		else
			l++;
	}
	return (s);
}
