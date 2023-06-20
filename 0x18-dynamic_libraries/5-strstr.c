#include "main.h"
#include <stdio.h>

/**
 * _strstr - find a substring
 * @haystack: string to search in
 * @needle: substring to be located
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char  *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		j = 0;

		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);
				j++;
			} while (haystack[j] == needle[j]);
		}
		haystack++;
	}
	return ('\0');
}
