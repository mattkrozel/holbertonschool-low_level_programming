#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - Check main
 * @: An input number
 * Description: function that prints 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if ((c / 10) == 0)
			{
				if (b != 0)
					putchar(' ');
				putchar (c + '0');

				if (b == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
				if (b == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
