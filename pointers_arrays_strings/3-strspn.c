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
	int m = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				m++;
		}
		accept++;
	}
	s++;

	return (m);
}
