#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds two numbers
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)i
 */
int main(int argc, char **argv)
{
	int num1, x, total = 0;

	while (argc-- > 1)
	{
		for (x = 0; argv[argc][x]; x++)
		{
			if (!(isdigit(argv[argc][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num1 = atoi(argv[argc]);
		total += num1;
	}
	printf("%d\n", total);
	return (0);
}
