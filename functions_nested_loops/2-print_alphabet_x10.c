#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * char l
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char l;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
	_putchar('\n');
	}
}
