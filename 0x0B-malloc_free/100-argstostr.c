#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: first arguement
 * @av: second arguement
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int d = 0, f = 0, g = 0, h = 0;
	char *v;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (f < d)
	{
		while (av[f][g])
		{
			d++;
			g++;
		}
		g = 0;
		f++;
	}
	v = malloc((sizeof(char) * d) + ac + 1);
	f = 0;
	while (av[f])
	{
		while (av[f][g])
		{
			v[h] = av[f][g];
			h++;
			g++;
		}
		v[h] = '\n';
		g = 0;
		h++;
		f++;
	}
	h++;
	v[h] = '\0';
	return (v);
}
