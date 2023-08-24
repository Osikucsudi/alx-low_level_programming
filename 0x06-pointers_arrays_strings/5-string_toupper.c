#include "main.h"

/**
 * string_toupper - change lower to uppercase
 * @str: string a to z
 * Return: string
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
		x++;
	}
	return (str);
}
