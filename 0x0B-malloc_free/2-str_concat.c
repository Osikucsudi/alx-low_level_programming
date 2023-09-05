#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - pointer
 * @s1: string 1
 * @s2: string 2
 * Return: 2 strings
 */

char *str_concat(char *s1, char *s2)
{
	int z = 0, x = 0, c = 0, v = 0;
	char *d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[z])
		z++;
	while (s2[x])
		x++;
	v = z + x;
	d = malloc((sizeof(char) * x) + 1);
	if (d == NULL)
		return (NULL);
	x = 0;
	while (c < v)
	{
		if (c <= z)
			d[c] = s1[c];
		if (c >= z)
		{
			d[c] = s2[x];
			x++;
		}
		c++;
	}
	d[c] = '\0';
	return (d);
}
