#include <stdio.h>
/**
 * positive_negative - Entry Point
 *
 * Description: print value of n satus; zero, positive or negative
 * Return: 0
 */
void positive_or_negative(int i)
{
	/* my if statement */
	if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
	printf("%d is postive\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}
}
