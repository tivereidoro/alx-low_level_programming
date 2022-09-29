#include "main.h"

/**
 * _puts_recursion - puts/prints a string
 *
 * @s: the string to be printed
 *
 * Return: the string printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
