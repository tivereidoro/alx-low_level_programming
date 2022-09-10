#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */



/**
 * main - Function to print the last digit of a number.
 * betty style doc for function main goes there
 * Return: 1 if the number is positive. 0 otherwise
 */
int main(void)
{
	int n;
	int lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	lastDgt = n % 10;

	if (lastDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
	}
	else if (lastDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);
	}

	return (0);
}
