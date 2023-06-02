#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x / 15)
			printf("FizzBuzz ");
		x++;
		else if (x / 3)
			printf("Fizz ");
		x++;
		else if (x / 5)
			printf("Buzz ");
		x++;
		else
			printf("%d ", x);
	}
	return (0);
}
