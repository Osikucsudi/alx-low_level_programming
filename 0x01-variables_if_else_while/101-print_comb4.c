#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: return 0
 */

int main(void)

{
	int m, n, b;

	for (m = '0' ; m < '9' ; m++)
	{

	for (n = m + 1 ; n <= '9' ; n++)
	{
	for (b = n + 1 ; b <= '9' ; b++)
	{
	if ((n != m) != b)
	{
	putchar(m);
	putchar(n);
	putchar(b);
	if (m == '7' && n == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
