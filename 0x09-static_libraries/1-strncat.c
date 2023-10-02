#include "main.h"

/**
 * _strncat - Concatenates two strings up to a specified number of bytes.
 * @dest: Pointer to a destination character array (string).
 * @src: Pointer to a source character array (string).
 * @n: Number of bytes from 'src' to concatenate to 'dest'.
 * Return: Pointer to the resulting concatenated string in 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	/* Find the end of the 'dest' string */
	while (*(dest + count) != '\0')
	{
		count++;
	}

	/* Concatenate up to 'n' bytes from 'src' to 'dest' */
	while (count2 < n)
	{
		*(dest + count) = *(src + count2);

		/* If '\0' (end of 'src') is encountered, break the loop */
		if (*(src + count2) == '\0')
			break;

		count++;
		count2++;
	}

	/* Ensure the result is a valid string by adding a null terminator */
	return (dest);
}

