#include "main.h"
#include <stdio.h>

/**
 * print_array - main function
 * @a: parameter for integers
 * @n: parameter elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
		if (d != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
