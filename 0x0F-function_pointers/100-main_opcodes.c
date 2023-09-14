#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: arguments
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r, v;
	char *d;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	r = atoi(argv[1]);
	if (r < 0)
	{
		printf("Error\n");
		exit(2);
	}
	d = (char *)main;
	for (v = 0; v < r; v++)
	{
		if (v == r - 1)
		{
			printf("%02hhx\n", d[v]);
			break;
		}
		printf("%02hhx", d[v]);
	}
	return (0);
}
