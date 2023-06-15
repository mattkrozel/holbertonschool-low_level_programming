#include <stdio.h>
#include "main.h"
int _div(int num, int div);

/**
 * is_prime_number - Check main
 * @n: input
 * Description: function that checks if number is prime or not
 * Return: results
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	return (_div(n, 2));
}

/**
 * _div - check
 * @num: input
 * @div: input
 * Return: Results
 */

int _div(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (_div(num, div + 1));
}
