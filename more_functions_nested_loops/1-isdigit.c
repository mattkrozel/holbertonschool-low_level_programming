#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check the code
 * @c : an input character
 * Description: checks for a digit
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
