#include "main.h"

/**
 * print_diagonal - main function
 * @n: parameter
 * Return:  0
 */

void print_diagonal(int n)
{
	int i, v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (v = 0; v < i; v++)
			{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
		}
	}

}
