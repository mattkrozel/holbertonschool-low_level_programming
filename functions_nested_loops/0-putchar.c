#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(word[x]);
	_putchar("\n");
	return (0);
}
