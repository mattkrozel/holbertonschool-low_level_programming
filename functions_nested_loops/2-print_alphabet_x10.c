#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * char l
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
	char l;

	c = 0;

	while (c < 10)
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
			(c++)
		}
	_putchar('\n');
}
