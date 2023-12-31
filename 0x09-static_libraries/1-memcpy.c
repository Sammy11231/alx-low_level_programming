#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied mem
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int j = n;

	for (; r < j; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
