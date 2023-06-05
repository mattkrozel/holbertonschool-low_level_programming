#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * swap_int - check the code
 * @a: an input character
 * @b: an input character
 * Description: swaps value of two ints
 * Return: swapped values
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
