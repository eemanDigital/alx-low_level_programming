#include <stdio.h>
/**
 * main - entry point to print
 *
 * Description: print natural numbers below 10
 * Return: 0
 */
int main(void)
{
	int add, n;

	for (n = 0; n < 1024; ++n)
	{
	if ((n % 3 == 0) || (n % 5 == 0))
	add += n;
	}
	printf("%d\n", add);
	return (0);
}


