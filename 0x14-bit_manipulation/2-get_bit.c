#include "main.h"

/**
 * get_bit - it gets the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ho;

	if (index > 64)
		return (-1);

	ho = n >> index;

	return (ho & 1);
}
