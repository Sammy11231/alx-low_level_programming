#include "main.h"
#include "stdio.h"

/**
 * main - a program that print its name
 * @agrc: num of command line inputed
 * @agrv: array name
 * Return: Always 0
 */

int main(int agrc, char *agrv[])
{
	int i;

	for (i = 0; i < agrc; i++)
		printf("%s\n", agrv[i]);
	return (0);
}
