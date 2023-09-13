#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - shows array
 * @array: array
 * @size: size
 * @action: actions
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;
	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
