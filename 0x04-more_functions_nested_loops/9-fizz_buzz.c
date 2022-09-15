#include <stdio.h>
/**
 * main - entry function
 * Description: print number and fizzbuzz
 * Return: 0
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
	if (a % 3 == 0 && a % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (a % 3 == 0)
	{
	printf("Fizz");
	}
	else if (a % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%i", a);
	}
	if (a != 100)
	{
	putchar(' ');
	}
	a++;
	}
	putchar('\n');
	return (0);
}
