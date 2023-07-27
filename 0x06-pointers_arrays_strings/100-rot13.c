#include "main.h"

/**
 * rot13 - Encode a string to rot13
 * @s: string
 * Return: pointer r
 */
char *rot13(char *s)
{
	char offset, *r = s;

	while (*s)
	{
		offset = (*s & 32) + 65;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			*s = (*s - offset + 13) % 26 + offset;
		s++;
	}
	return (r);
}
