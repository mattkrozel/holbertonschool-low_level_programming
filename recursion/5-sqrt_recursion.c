#include <stdio.h>
#include "main.h"
int _sqrt_(int temp, int sqrt);

/**
 * _sqrt_recursion - Check main
 * @n: input
 * Description: function that gets square root using recursion
 * Return: results
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_(1, n));
}

/**
 * _sqrt_ - check
 * @temp: input
 * @sqrt: input
 * Return: Results
 */

int _sqrt_(int temp, sqrt)
{
	if (temp > sqrt)
		return (-1);
	else if (temp * temp == sqrt)
		return (temp);
	return (_sqrt_(temp + 1, sqrt));
}
