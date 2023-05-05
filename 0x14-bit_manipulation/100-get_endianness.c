#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int p;
	char *i;

	p = 1;
	i = (char *) &p;

	return ((int)*i);
}
