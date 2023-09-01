#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function to locate string
 * @s: string
 * @accept: byte string
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k, m;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[k] == accept[m])
				return (s + k);
		}
	}
	return (NULL);
}
