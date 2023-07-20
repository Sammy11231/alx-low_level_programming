#include "main.h"

/**
 * positive_or_negative - testing for a positive or negative number
 * @i: this is the integer
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive", i);
		printf("\n");
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
		printf("\n");
	}
	else
	{
		printf("%d is zero", i);
		printf("\n");
	}
}
