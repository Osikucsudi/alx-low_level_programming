#include "main.h"

/**
 * print_alphabet - alphabet a-z
 * Return: 0 always
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		_putchar(k);
	_putchar('\n');
}
