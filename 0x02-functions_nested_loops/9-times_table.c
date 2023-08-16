#include "main.h"
#include <stdio.h>

/**
 * times_table - 9 times table
 * Return: Should be 0
 */

void times_table(void)
{
	int k, l, result;

	for (k = 0 ; k < 10 ; k++)
	{
		for (l = 0 ; l < 10 ; l++)
		{
			result = k * l;
			if (l == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (l != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
