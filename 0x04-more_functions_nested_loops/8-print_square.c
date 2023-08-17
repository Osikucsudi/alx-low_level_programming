#include "main.h"

/**
 * print_square - main function of printing a square
 * @size: parameter
 * Return: square
 */

void print_square(int size)
{
	int a, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
