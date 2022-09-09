#include <stdio.h>
#include <unistd.h>
/**
 * main - my entry point
 *
 * Description: code to print combination
 * of single digit
 * Return: 0
 */
int main(void)
{
	int c;
	int i;
	int a;

	for (c = '0'; c <= '9'; c++)
	{
	for (i = '0'; i <= '9'; i++)
	{
	for (a = '0'; a <= '9'; a++)
	{
	if (c < i && i < a)
	{
		putchar(c);
		putchar(i);
		putchar(a);
	if (c != '7')
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
