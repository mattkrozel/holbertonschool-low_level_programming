#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _strspn - check the code
 * @s : input
 * @accept : input
 * Description: gets length of a prefix substring
 * Return: total
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, ct = 0;

	for (x = 0; s[x]; x++)
	{
		int match = 0;

		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
		{
			break;
		ct++;
		}
	}

	return (ct);
}
