#include "main.h"

/**
 * _isalpha - checking for alpha
 * @c: the int to be checked
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
