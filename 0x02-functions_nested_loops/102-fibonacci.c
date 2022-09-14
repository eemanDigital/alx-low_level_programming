#include <stdio.h>
/**
 * main - entry point to print 52 num
 *
 * Description: print first 50 numbers
 * fibonaci
 * Return: null
 */
int main(void)
{
	int x = 0;
	int y = 1, k = 2;

	while (x < 50)
	{
	if (x == 0)
	printf("%1d", y);
	else if (x == 1)
	printf(", %ld", k);
	else
	{
	k += y;
	y = k - y;
	printf(", %ld", k);
	}
	++x;
	}
	printf("\n");
	return (0);

}
