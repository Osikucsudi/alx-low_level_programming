#include "main.h"

/**
 * _strspn- returns number of bytes
 * @accept: bytes
 * @s: intial segment
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int u, m;

	for (u = 0; s[u] != '\0'; u++)
	{
		for (m = 0; s[m] != accept[m]; m++)
		{
			if (accept[m] == '\0')
				return (u);
		}
	}
	return (0);
}
