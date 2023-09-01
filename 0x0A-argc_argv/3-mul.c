#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function for multiplication
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int u = 0, k = 0;

	if (argc == 3)
	{
		u = atoi(argv[1]);
		k = atoi(argv[2]);
		printf("%d\n", u * k);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
