#include <stdio.h>

/**
 * main - digits 0 to 10
 *
 * Return: 0  number
 */

int main(void)
{
	int m;

	for (m = 0 ; m < 10 ; m++)
		putchar(m + '0');
	putchar('\n');
	return (0);
}
