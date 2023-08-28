#include "main.h"

/**
 * print_chessboard - main function
 * @a: parameter
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int s, d;

	for (s = 0; s < 8; s++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[s][d]);
		_putchar('\n');
	}
}
