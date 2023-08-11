#include <stdio.h>

/**
 * main - digits 0 to 16
 *
 * Return: 0  number
 */

int main(void)
{
	int j;
	char y;

	for (j = 0 ; j < 10 ; j++)
		putchar(j + '0');
	for (y = 'a' ; y <= 'f' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
