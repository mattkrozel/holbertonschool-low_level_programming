#include <stdio.h>
#include "main.h"

/**
 * print_sign - Check main
 * @n: An input number
 * Description: function prints the sign of the number
 * Return: 1, 0, or -1
 */
int print_sign(int n)
{
	int result = 0;

	if (n > 0)
	{
		printf("+");
		result = 1;
	}
	else if (n < 0)
	{
		result = -1;
		printf("\r-");
	}
	else
	{
		printf("0");
	}
	return (result);
}
