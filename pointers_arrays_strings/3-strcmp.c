#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * *_strcmp - check the code
 * @s1 : input
 * @s2 : input
 * Description: compares two strings
 * Return: total
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (s1 - s2);

}
