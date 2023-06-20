#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is c or 0 if not
 */

int _isalpha(int c)
{
	char l;
	int result = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == c)
			result = 1;
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		if (l == c)
			result = 1;
	}
	return (result);
}
