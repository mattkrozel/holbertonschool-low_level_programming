#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc < 3)
	{
		printf(("Error\n");
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", (num1 * num2));
	return (0);
}
