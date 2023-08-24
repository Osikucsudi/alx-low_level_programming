#include "main.h"

/**
 * _strncpy - function working like strncpy
 * @dest: parameter
 * @src: parameter string
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_k = 0;

	while (src[i++])
		src_k++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_k; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
