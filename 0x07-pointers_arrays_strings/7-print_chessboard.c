#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: board to print
 */
void print_chessboard(char (*a)[8])
{
	int y;
	int i;

	for (y = 0; y < 8; y++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[y][i]);
		}
		_putchar('\n');
	}
}
