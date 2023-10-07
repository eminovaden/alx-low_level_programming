#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - It allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *f = malloc(b);

	if (f == NULL)
  {
		exit(98);
  }
	return (f);
}
