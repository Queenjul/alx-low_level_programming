#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - explore a string for any of a set of bytes
 * @s: string to be explore
 * @accept: string containing the bytes
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
