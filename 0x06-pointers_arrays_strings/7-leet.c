#include "main.h"

/**
 * leet - main function
 * @n: values in letters
 * Return: n
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTiL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
