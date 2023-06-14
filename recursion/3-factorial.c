#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * factorial - Check main
 * @n: An input number
 * Description: function that multiplies two integers
 * Return: result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
