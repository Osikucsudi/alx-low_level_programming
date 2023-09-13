#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sums returns
 * @a: first number
 * @b: second number
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns subtraction
 * @a: number 1
 * @b: number 2
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns multiplication
 * @a: number 1
 * @b: number 2
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns divisions
 * @a: number 1
 * @b: number 2
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns modulo
 * @a: number 1
 * @b: number 2
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
