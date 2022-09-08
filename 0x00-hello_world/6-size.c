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

	print("size of char:%ld byte(s)\n", sizeof(c));
	print("size of int:%ld byte(s)\n", sizeof(i));
	print("size of li:%ld byte(s)\n", sizeof(li))
	print("size of lli:%ld byte(s)\n", sizeof(lli));
	print("size of float:%ld byte(s)\n", sizeof(f));
	return (0);
}
