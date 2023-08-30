#include "main.h"
#include <stdio.h>

int _sqrt(int n, int x);
/**
 * _sqrt_recursion - main function
 * @n: natural square root
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - main function
 * @n: number
 * @x: parameter
 * Return: 0
 */

int _sqrt(int n,  int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (x);
	return (_sqrt(n, x + 1));
}
