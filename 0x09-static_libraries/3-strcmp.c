#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * Return: 0 if s1 and s2 are equal, a positive number if s1 is greater,
 * and a negative number if s2 is greater.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (result == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		result = s1[i] - s2[i];
		i++;
	}

	return (result);
}
