#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int.
 */
void print_binary(unsigned long int n)
{
	int p, tmp = 0;
	unsigned long int current;

	for (p = 35; p >= 0; p--)
	{
		current = n >> p;

		if (current & 1)
		{
			_putchar('1');
			tmp++;
		}
		else if (tmp)
			_putchar('0');
	}
	if (!tmp)
		_putchar('0');
}
