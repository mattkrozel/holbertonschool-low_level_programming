#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints number of arguments passed to it
 * @argc: arguement count
 * Return: Always 0 (Success)
 */
int main(int argc)
{
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
