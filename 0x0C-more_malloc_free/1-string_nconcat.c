#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int e = 0, r = 0, t = 0, y = 0;
	char *d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[e])
		e++;
	while (s2[t])
		t++;
	if (n >= t)
		y = e + t;
	else
		y = e + n;
	d = malloc(sizeof(char) * y + 1);
	if (d == NULL)
		return (NULL);
	t = 0;
	while (r < y)
	{
		if (r <= e)
			d[r] = s1[r];
		if (r >= e)
		{
			d[r] = s2[t];
			t++;
		}
		r++;
	}
	d[r] = '\0';
	return (d);
}
