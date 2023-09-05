#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int q, w, e, r;
	int **h;

	if (width <= 0 || height <= 0)
		return (NULL);
	h = malloc(sizeof(int *) * height);
	if (h == NULL)
	{
		free(h);
		return (NULL);
	}
	for (q = 0; q < height; q++)
	{
		h[q] = malloc(sizeof(int) * width);
		if (h[q] == NULL)
		{
			for (w = q; w >= 0; w--)
			{
				free(h[w]);
			}
			free(h);
			return (NULL);
		}

	}
	for (e = 0; e < height; e++)
	{
		for (r = 0; r < width; r++)
		{
			h[e][r] = 0;
		}
	}
	return (h);
}
