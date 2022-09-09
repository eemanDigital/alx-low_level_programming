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
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (last_digit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("lastdigit of %d is %d and isless than 6 and not 0\n", n, last_digit);
	}
	else
	{
		("The last digit of %d is %d and is 0\n", n, last_digit);
	}
	return (0);

}
