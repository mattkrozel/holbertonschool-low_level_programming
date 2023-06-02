#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Check main
 * @x: An input number
 * Description: function that prints 1-100 with fizzbuzz
 * Return: 1-100 and words
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x / 15)
			printf("FizzBuzz ");
		else if (x / 3)
			printf("Fizz ");
		else if (x / 5)
			printf("Buzz ");
		else
			printf("%d "), x;
	}
	return(0);
}
