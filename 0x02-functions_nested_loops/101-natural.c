#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints sum of multiples of 3 and 5
 *
 * Return: 0.
 */
int main(void)

{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%i\n", sum);
	return (0);
}
