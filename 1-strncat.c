#include "main.h"

/**
 * _strncat - main concatenating function
 * @dest: parameter
 * @src: parameter
 * @n: bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_k =  0;

	while (dest[i++])
		dest_k++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_k++] =  src[i];
	return (dest);
}
