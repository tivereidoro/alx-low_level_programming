#include "main.h"

/**
 * print_triangle - prints a triangle with specified size
 *
 * @size: the int size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, s;

	if (size <= 0)
	{
		_putchar("\n");
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			s = size - i - 1;
			if (j < s)
			{
				_putchar(" ");
			}
			else
			{
				_putchar("#");
			}
		}

		_putchar("\n");
	}
}
