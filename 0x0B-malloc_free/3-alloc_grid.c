#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **jul;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	jul = malloc(sizeof(int *) * height);

	if (jul == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		jul[i] = malloc(sizeof(int) * width);

		if (jul[i] == NULL)
		{
			for (; i >= 0; i--)
				free(jul[i]);

			free(jul);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			jul[i][k] = 0;
	}

	return (jul);
}
