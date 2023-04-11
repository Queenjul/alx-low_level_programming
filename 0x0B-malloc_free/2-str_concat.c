#include "main.h"
#include <stdlib.h>
/**
 * str_concat - earn ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int h, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	h = ci = 0;
	while (s1[h] != '\0')
		h++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (h + ci + 1));

	if (conct == NULL)
		return (NULL);
	h = ci = 0;
	while (s1[h] != '\0')
	{
		conct[h] = s1[h];
		h++;
	}

	while (s2[ci] != '\0')
	{
		conct[h] = s2[ci];
		h++, ci++;
	}
	conct[h] = '\0';
	return (conct);
}
