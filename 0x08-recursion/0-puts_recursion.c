#include "main.h"

/**
 * _puts_recursion - It prints a string, followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
