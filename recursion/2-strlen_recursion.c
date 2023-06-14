#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen_recursion - Check main
 * @s: An input number
 * Description: function that multiplies two integers
 * Return: result
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
