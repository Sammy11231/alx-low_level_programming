#include "main.h"
#include <stdio.h>

/**
 * main - program that print all the agr inputed
 * @agrc: num of command line inputed
 * @agrv: array name
 * return: always 0
 */

int main(int agrc, char *agrv[])
{
	int i;
	
	for (i = 0; i < agrc; i++)
		printf("%s\n", agrv[i]);
	return (0);
}
