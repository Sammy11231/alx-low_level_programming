#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 agr
 * @agrc: command line input
 * @agrv: array
 * Return: 1 if error, otherwise 0
 */

int main(int agrc, char *agrv[])
{
	int i, mul = 1;

	if (agrc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < agrc; i++)
			mul *= atoi(agrv[i]);
		printf("%d\n", mul);
	}
	return (0);
}
