#include <stdio.h>
#include "main.h"

/**
 * main - program for fizzBuzz
 *
 * Return: 0; else 1.
 */
int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 = 0 && i % 5 == 0)
		{
			printf('FizzBuzz ');
		}
		else if (i % 3 == 0)
		{
			printf('Fizz ');
		}
		else if (i % 5 == 0)
		{
			printf('Buzz ');
		}
		else
			printf('%d ', i);
	}

	printf('\n');
	return (0);
}
