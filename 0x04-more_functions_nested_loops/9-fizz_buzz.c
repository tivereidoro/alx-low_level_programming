#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100 followed by a new line
 * for multiples of 3 print Fizz
 * for multiples of 5 print Buzz
 * for multipes of 3 and 5 print FizzBuzz
 *
 * Return: 0; else 1.
 */
int main(void)
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
