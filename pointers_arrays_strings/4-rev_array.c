#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * reverse_array - check the code
 * @a : input
 * @n : input
 * Description: reverses array
 * Return: total
 */
void reverse_array(int *a, int n)
{
	int c = 0, hold;

	while (c < n--)
	{
		hold = a[c];
		a[c++] = a[n];
		a[n] = hold;
	}

}
