#include "main.h"

/**
 * print_last_digit - last 10 digits
 * @a: function
 * Return: m
 */

int print_last_digit(int a)
{
	int m;

	m = a % 10;
	if (a < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
