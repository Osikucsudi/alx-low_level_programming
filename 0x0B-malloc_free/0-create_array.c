#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates arrays
 * @size: parameter
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int d;
	char *x;

	if (size == 0)
		return (NULL);

	x = malloc(size * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (d = 0; d < size; d++)
	{
		x[d] = c;
	}
	return (x);
}
