#include <stdio.h>
/**
 * main - entry function
 * Description: print prime factor
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long div = 2;
	long l_p = 0;

	while (n != 1)
	{
	if (n % div == 0)
	{
	n = n / div;
	l_p = div;

	}
	div += 1;
	}
	printf("%ld\n", l_p);
	return (0);
}
