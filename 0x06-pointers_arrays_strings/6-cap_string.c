#include "main.h"

/**
 * cap_string - function capitalizes word strings
 * @str: string
 * Return: string of word
 */

char *cap_string(char *str)
{
	int q = 0;

	while (str[q])
	{
		while (!(str[q] >= 'a' && str[q] <= 'z'))
			q++;
		if (str[q - 1] == ' ' ||
		str[q - 1] == '\t' ||
		str[q - 1] == '\n' ||
		str[q - 1] == ',' ||
		str[q - 1] == ';' ||
		str[q - 1] == '.' ||
		str[q - 1] == '!' ||
		str[q - 1] == '?' ||
		str[q - 1] == '"' ||
		str[q - 1] == '(' ||
		str[q - 1] == ')' ||
		str[q - 1] == '{' ||
		str[q - 1] == '}' ||
		q == 0)
			str[q] -= 32;
			q++;
	}
	return (str);
}
