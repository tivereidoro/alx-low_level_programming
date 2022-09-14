#include "main.h"

/**
 * _abs - print absolute int value
 * @x: integer to be passed
 * Return: absolute value of integer
 */
int _abs(int x)
{
	if (x > 0)
	{
		x *= 1;
	}
	else if (x == 0)
	{
		x = 0;
	}
	else
	{
		x *= -1;
	}

	return (x);
}
