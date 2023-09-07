#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - memory checked
 * @b: size
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
