#include <stdio.h>

/**
 * main - number 1-9
 *
 * Return: should be 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10 ; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
