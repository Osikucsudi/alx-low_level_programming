#include "main.h"
#include <stdio.h>

/**
 * _strchr - character in a string
 * @s: string
 * @c: character
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (s + p);
	}
	return (NULL);
}
