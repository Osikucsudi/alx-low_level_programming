#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *m, a = 0;

	if (min > max)
		return (NULL);
	m = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (m == NULL)
		return (NULL);
	while (min <= max)
	{
		m[a] = min;
		a++;
		min++;
	}
	return (m);
}
