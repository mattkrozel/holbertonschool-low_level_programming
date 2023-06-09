#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *cap_string - Check main
 * @s: input
 * Description: function that that makes all words capital in string
 * Return: results
 */

char *cap_string(char *s)
{
	int l = 0, d = 0;

	while (s[l])
	{
		if (d == 0 && s[l] > 96 && s[l] < 123)
		{
			s[l] -= 32;
			d = 1;
		}

		if (s[l] < 65 || (s[l] > 90 && s[l] < 97) || s[l] > 122)
			d = 0;

		if ((s[l] > 65 && s[l] < 90) || (s[l] > 47 && s[l] < 58) || s[l] == 45)
			d = 1;

		l++;
	}
	return (s);
}
