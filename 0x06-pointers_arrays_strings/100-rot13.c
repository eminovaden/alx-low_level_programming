#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: Input string.
 * Return: Pointer to the updated string.
 */
char *leet(char *s)
{
	int count = 0, i;
	int low_letters[] = {'a', 'e', 'o', 't', 'l'};
	int upp_letters[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {'4', '3', '0', '7', '1'};

	while (s[count] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[count] == low_letters[i] || s[count] == upp_letters[i])
			{
				s[count] = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}

