#include "main.h"

/**
 * _strspn - obtain the length of a preix substring
 * @s: string to estimate
 * @accept: string containing the list of characters to match in s
 * Return:  the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int y;


	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (accept[y] == *s)
			{
				i++;
				break;
			}

			else if ((accept[y + 1]) == '\0')
				return (i);
		}
		s++;
	}

	return (i);
}
