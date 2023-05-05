#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - program sets the value of a bit to 0 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 23)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
