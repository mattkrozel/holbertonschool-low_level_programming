#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Check main
 * int c
 * int l
 * Description: function prints 0-14 followed by new line 10 times
 * Return: results
 */
void more_numbers(void)
{
	int c = 0, l = 0;

	for (; l <= 10; l++)
	{
		for (; c <= 14; c++)
			_putchar(c + '0');
	_putchar("\n");
	}

}
