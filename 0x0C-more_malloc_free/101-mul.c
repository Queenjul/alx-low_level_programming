#include "main.h"

/**
 * main - expand two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int k, p;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (k = 1; k < argc; k++)
	{
		for (p = 0; argv[k][p] != '\0'; p++)
		{
			if (argv[k][p] > 57 || argv[k][p] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
