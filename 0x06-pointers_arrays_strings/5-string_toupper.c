#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @n: string
 * Return: pointer r
 */

char *string_toupper(char *n)
{
	char *r = n;

	while (*n)
	{
		if (*n >= 'a' && *n <= 'z')
			*n -= 32;
		n++;
	}
	return (r);
}
