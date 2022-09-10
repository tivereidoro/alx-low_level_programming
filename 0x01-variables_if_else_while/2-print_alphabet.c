#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the main function
 * Description: Prints out the alphabet in lowercase followed by a new line
 * Return: The function returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar(10);
	return (0);
}
