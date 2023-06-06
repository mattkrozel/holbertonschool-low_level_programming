#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: input
 * @src: input
 * Description: function that copies the string
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
