#include <stdio.h>

/**
 * main - lowrcase not q,e
 *
 * Return: always 0
 */
int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar(j);
	return (0);

}
