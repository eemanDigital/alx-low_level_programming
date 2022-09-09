#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point for the code
 * Description: code to print the assign a random number
 * to the variable n each time it is executed
 * Return: 0
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, d);
	}
	else if (d < 6 && d != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);

}
