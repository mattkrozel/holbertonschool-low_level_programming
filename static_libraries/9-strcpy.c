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
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
