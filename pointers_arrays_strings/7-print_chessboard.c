#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - check the code
 * @a : input
 * Description: prints a chessboard
 * Return: total
 */
void print_chessboard(char (*a)[8])
{
	int x = 0, y = 0;

	for (; x < 8; x++)
	{
		for (; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
