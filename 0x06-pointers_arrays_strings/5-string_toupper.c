#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: Input string.
 * Return: The pointer to the updated string.
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] >= 'a' && s[count] <= 'z')
			s[count] -= ('a' - 'A');
		count++;
	}

	return (s);
}
