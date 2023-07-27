#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @n: string
 * Return: 0.
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (0);
}
