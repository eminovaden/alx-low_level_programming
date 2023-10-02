#include "main.h"

/**
 * _strcat - Function for concatenating strings
 * @dest: Pointer to a character array (string)
 * @src: Pointer to a character array (string)
 * Return: Pointer to the concatenated string in 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Find the end of the 'dest' string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy characters from 'src' to the end of 'dest' */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	/* Add the null terminator to make it a valid string */
	dest[i] = '\0';

	/* Return a pointer to the concatenated string in 'dest' */
	return (dest);
}
