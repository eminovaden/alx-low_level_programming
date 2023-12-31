#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, followed by a new line
 * but for multiples of 3 prints Fizz instead of the number
 * and for the multiples of 5 prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%i", i);
		} else
		{
			printf(" %i", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
