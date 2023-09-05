#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int c = 0, f = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[f])
	{
		f++;
	}
	s = malloc((sizeof(char) * f) + 1);
	if (s == NULL)
		return (NULL);
	while (c < f)
	{
		s[c] = str[c];
		c++;
	}
	s[c] = '\0';
	return (s);
}
