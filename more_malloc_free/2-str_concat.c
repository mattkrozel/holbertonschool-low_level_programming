#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two swtrings,
 * with the returned pointer pointing to a newly
 * allocated space in memory
 * @s1: input
 * @s2: input
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, cnt1 = 0, cnt2 = 0;
	char *finstr, *st1, *st2;

	st1 = s1;
	st2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		cnt1++;
		s1++;
	}
	s1 = st1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		cnt2++;
		s2++;
	}
	s2 = st2;
	finstr = malloc(sizeof(char) * (cnt1 + cnt2 + 1));
	st1 = finstr;
	if (finstr == NULL)
		return (NULL);
	for (; x < (cnt1 + cnt2); x++)
	{
		if (x < cnt1)
		{
			finstr[x] = *s1;
			s1++;
		}
		else
		{
			finstr[x] = *s2;
			s2++;
		}
	}
	finstr[x] = '\0';
	return (st1);
}
