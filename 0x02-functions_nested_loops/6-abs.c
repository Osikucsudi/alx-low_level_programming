#include "main.h"

/**
 * _abs - print absolute number
 * @g: function
 * Return: 0
 */

int _abs(int g)
{
	if (g < 0)
		return (-g);
	else if (g >= 0)
	{
		return (g);
	}

	return (0);
}
