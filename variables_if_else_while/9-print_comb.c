#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	char n, f;
	char f = ", ";

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n, f);
	}
	putchar('\n');

	return (0);
}
