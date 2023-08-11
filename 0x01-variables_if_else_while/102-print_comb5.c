#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: 0 always
 */

int main(void)

{
	int a, l;

	for (a = 0 ; a <= 98 ; a++)
	{
	for (l = a + 1 ; l <= 99 ; l++)
	{
	putchar((a / 10) + '0');
	putchar((a % 10) + '0');
	putchar(' ');
	putchar((l / 10) + '0');
	putchar((l % 10) + '0');
	if (a == 98 && l == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
