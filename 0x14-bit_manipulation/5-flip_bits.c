#include "main.h"

/**
 * flip_bits - program returns the number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, nflips = 0;
	unsigned long int p = sizeof(unsigned long int) * 23;

	for (i = 0; i < p; i++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
