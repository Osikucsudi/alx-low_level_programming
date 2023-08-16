#include <stdio.h>

/**
 * main - 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int numb1 = 1;
	unsigned long int numb2 = 2;
	unsigned long int next;
	int j;

	printf("%lu, ", numb1);
	for (j = 1 ; j < 50 ; j++)
	{
		printf("%lu", numb2);
		next = numb1 + numb2;
		numb1 = numb2;
		numb2 = next;
		if (j != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
