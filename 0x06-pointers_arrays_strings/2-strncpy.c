#include "main.h"

/**
 * _strncpy - Copy up to 'n' characters from 'src' to 'dest'.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 * Return: Pointer to the resulting 'dest' string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i = 0;

	/* Copy characters from 'src' to 'dest' up to 'n' characters */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* If 'n' is not reached, pad 'dest' with null characters */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

