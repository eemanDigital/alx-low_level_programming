#include <stdio.h>
/**
 * main - to print sizeof
 *
 * description: function to print function
 * This programe prints "size of various types"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of char: %1d byte(s)\n", sizeof(c));
	printf("size of int: %1d byte(s)\n", sizeof(i));
	printf("size of li: %1d byte(s)\n", sizeof(li))
	printf("size of lli: %1d byte(s)\n", sizeof(lli));
	printf("size of float: %1d byte(s)\n", sizeof(f));
	return (0);
}
