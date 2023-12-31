#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - It prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0;

	unsigned int sum = 0, sum1 = 0;

	while (i < size)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum, sum1);
}
