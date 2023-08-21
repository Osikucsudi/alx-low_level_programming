#include "main.h"

/**
 * swap_int - main function
 * @a: first parameter
 * @b: second parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
/*  the function swaps the integers */
{
	int temp = *a;
	*a = *b;
		*b = temp;
}
