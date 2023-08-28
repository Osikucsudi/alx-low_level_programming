#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum in a diagonal
 * @a: parameter
 * @size: parameter
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int w, r, sum1 = 0, sum2 = 0;

	for (w = 0; w <= (size * size); w = w + size + 1)
		sum1 = sum1 + a[w];

	for (r = size - 1; r <= (size * size) - size; r = r + size - 1)
		sum2 = sum2 + a[r];
	printf("%d, %d\n", sum1, sum2);
}
