#include "main.h"
#include <stdio.h>

/**
 * rot13 - main function
 * @s: parameter
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == data1[i])
			{
				s[i] = data2[j];
				break;
			}
		}
	}
	return (s);
}
