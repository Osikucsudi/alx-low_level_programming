#include "main.h"

/**
 * _strlen_recursion - main function
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - comparison function
 * @s: string
 * @k1: small parameter
 * @k2: big parameter
 * Return: 0
 */

int comparator(char *s, int k1, int k2)
{
	if (*(s + k1) == *(s + k2))
	{
		if (k1 == k2 || k1 == k2 + 1)
			return (1);
		return (0 + comparator(s, k1 + 1, k2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - main function
 * @s: string
 * Return: 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
