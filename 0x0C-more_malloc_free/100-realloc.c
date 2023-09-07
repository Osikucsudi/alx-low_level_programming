#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: size in bytes
 * @new_size: new size in bytes
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int b;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
		return (c);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	for (b = 0; b < old_size && b < new_size; b++)
	{
		c[b] = ((char *) ptr)[b];
	}
	free(ptr);
	return (c);
}
