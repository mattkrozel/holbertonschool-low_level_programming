#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * with very specific requirments
 * @s1: input
 * @s2: input
 * @n: input
 * Return: Nothing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *finstr;
	unsigned int x = 0, sz1 = 0, sz2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[sz1])
		sz1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[sz2])
		sz2++;

	if (x >= sz2)
		x = sz2;

	finstr = malloc(sz1 + x + 1);
	if (finstr == NULL)
		return (NULL);

	for (; x < (sz1 + x); x++)
	{
		if (x < sz1)
			finstr[x] = *s1, s1++;
		else
			finstr[x] = *s2, s2++;
	}
	finstr[x] = '\0';
	return (finstr);
}
