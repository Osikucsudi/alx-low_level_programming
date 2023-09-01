#include "main.h"

/**
 * _strcmp - comparison
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: difference in parameter
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
