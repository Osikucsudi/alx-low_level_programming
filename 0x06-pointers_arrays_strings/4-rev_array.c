#include "main.h"

/**
 * reverse_array - function shows reverse string
 * @a: parameter 1
 * @n: parameter 2
 *
 */

void reverse_array(int *a, int n)
{
	int b, m;

	for (b = n - 1; b >= n / 2; b--)
	{
		m = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = m;
	}
}
