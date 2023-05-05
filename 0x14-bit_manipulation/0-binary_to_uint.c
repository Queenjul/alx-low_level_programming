#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pj;
	int tmp, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (tmp = 0; b[tmp] != '\0'; tmp++)
		;

	for (tmp--, base_two = 1; tmp >= 0; tmp--, base_two *= 2)
	{
		if (b[tmp] != '0' && b[tmp] != '1')
		{
			return (0);
		}

		if (b[tmp] & 1)
		{
			pj += base_two;
		}
	}

	return (pj);
}
