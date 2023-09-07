#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function allocates memory for an array
 * @nmemb: elements
 * @size: bytes
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int w = 0, x = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	s = malloc(x);
	if (s == NULL)
		return (NULL);
	while (w < x)
	{
		s[w] = 0;
		w++;
	}
	return (s);
}
