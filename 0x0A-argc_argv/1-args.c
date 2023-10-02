#include <stdio.h>
#include "main.h"

/**
 * main - It print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 is a successful program
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
