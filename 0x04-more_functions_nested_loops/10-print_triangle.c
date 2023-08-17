#include "main.h"

/**
 * print_triangle - main function
 * @size: parameter
 * Return: triangle
 */

void print_triangle(int size)
{
	int a, c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (c = size - a; c > 1; c--)
			{
				_putchar(32);
			}
			for (d = 0; d <= a; d++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}

}
