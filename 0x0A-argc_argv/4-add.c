#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	unsigned int w, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			c = argv[x];
			for (w = 0; w < strlen(c); w++)
			{
				if (c[w] < 48 || c[w] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(c);
			c++;
			}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
