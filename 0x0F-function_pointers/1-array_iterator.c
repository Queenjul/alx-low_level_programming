#include "function_pointers.h"

/**
 * array_iterator - achieve a function given as a
 * parameter on each element of an array.
 * @array: array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array && action)
		for (k = 0; k < size; k++)
			action(array[k]);
}
