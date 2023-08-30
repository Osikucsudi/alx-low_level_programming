#include "main.h"
#include <stdio.h>

int check_prime(int n, int k);

/**
 * is_prime_number - checks prime number
 * @n: number
 * Return: 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - main function
 * @n: number
 * @k: parameter
 * Return: 0
 */

int check_prime(int n, int k)
{
	if (n <= 1)
		return (0);
	if (n % k == 0 && k > 1)
		return (0);
	if ((n / k) < k)
		return (1);
	return (check_prime(n, k + 1));
}
