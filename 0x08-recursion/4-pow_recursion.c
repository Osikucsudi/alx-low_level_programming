#include "main.h"

/**
 * _pow_recursion - main functon for power raised
 * @x: number
 * @y: power raised
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-0);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
