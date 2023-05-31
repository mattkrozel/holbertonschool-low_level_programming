#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - check the code
 * @c : input
 * Description: checks uppercase
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
