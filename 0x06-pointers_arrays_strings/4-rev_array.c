#include "main.h"

/**
 * reverse_array - reverse the content of array element
 * @a: array
 * @n: element of array
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
