#include "main.h"

/**
 * print_alphabet_x10 - 10 alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	char m;

	for (a =  '0' ; a <= '9' ; a++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
			_putchar(m);
	}
	_putchar('\n');
}
