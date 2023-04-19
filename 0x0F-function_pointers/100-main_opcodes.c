#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its own opcodes.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int l, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (l = 0; l < nbytes; l++)
	{
		printf("%02x", opc[l] & 0xFF);
		if (l != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
