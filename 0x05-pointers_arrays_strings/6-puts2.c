#include "main.h"

/**
 * puts2 - main function
 * @str: parameter
 * Return: 0
 */

void puts2(char *str)
{
	int k;
	int m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	for (k = 0; k < m; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
