#include <stdio.h>

/**
 * main - even fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int limit = 4000000;
	int numb1 = 1;
	int numb2 = 2;
	int sum = 2;
	int next;

	while (next <= limit)
	{
		next = numb1 + numb2;
		if (next % 2 == 0)
			sum = sum + next;
		numb1 = numb2;
		numb2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
