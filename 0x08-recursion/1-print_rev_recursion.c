#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse with recursion
 *
 * @s: string to be printed
 *
 * Return: the printed string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
