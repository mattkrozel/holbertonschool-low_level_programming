#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * 24_hours - Check main
 * @r: An input number
 * Description: function that prints all the minutes in a day
 * Return: nothing
 */
void jack_bauer(void);
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}
