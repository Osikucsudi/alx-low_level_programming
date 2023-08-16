#include "main.h"

/**
 * _islower - check for c to be lowercase
 * @c: check c
 * Return: either 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
