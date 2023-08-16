#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int h;

	for (h = 0 ; h < 1024 ; h++)
	{
		if (h % 3 == 0 || h % 5 == 0)
			sum = sum + h;
	}
	printf("%d\n", sum);
	return (0);
}
