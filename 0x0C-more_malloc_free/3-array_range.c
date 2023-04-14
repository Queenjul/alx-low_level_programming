#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ji;
	int o;

	if (min > max)
		return (NULL);

	ji = malloc(sizeof(*ji) * ((max - min) + 1));

	if (ji == NULL)
		return (NULL);

	for (o = 0; min <= max; o++, min++)
		ji[o] = min;

	return (ji);
}
