#include <stdio.h>

/**
 * main - set 98 fibonacci numbers
 * 1 and 2, put comma
 * Return: should be 0
 */
int main(void)

{
	int count;
	unsigned long numb1 = 0, numb2 = 1, sum;
	unsigned long numb1_half1, numb1_half2, numb2_half1, numb2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
	sum = numb1 + numb2;
	printf("%lu, ", sum);
	numb1 = numb2;
	numb2 = sum;
	}
	numb1_half1 = numb1 / 10000000000;
	numb2_half1 = numb2 / 10000000000;
	numb1_half2 = numb1 % 10000000000;
	numb2_half2 = numb2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
	half1 = numb1_half1 + numb2_half1;
	half2 = numb1_half2 + numb2_half2;
	if (numb1_half2 + numb2_half2 > 9999999999)
	{
	half1 += 1;
	half2 %= 10000000000;
	}
	printf("%lu%lu", half1, half2);
	if (count != 98)
	printf(", ");
	numb1_half1 = numb2_half1;
	numb2_half2 = numb2_half2;
	numb2_half1 = half1;
	numb2_half2 = half2;
	}
	printf("\n");
	return (0);
}
