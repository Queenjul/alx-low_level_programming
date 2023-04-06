#include "main.h"

/**
 * _sqrt - obtain the square root of a value
 * @prev: previous value
 * @root: the square value
 * Return: the square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
	{
		return (-1);
	}
	else if (prev * prev == root)
	{
		return (prev);
	}

	return (_sqrt(prev + 1, root));
}

