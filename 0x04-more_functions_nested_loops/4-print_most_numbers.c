#include "main.h"

/**
 * print_most_numbers - prints numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 4 && i != 2)
		{
			_putchar(i + '0');
		}
		i++;
	}

	_putchar('\n');
}
