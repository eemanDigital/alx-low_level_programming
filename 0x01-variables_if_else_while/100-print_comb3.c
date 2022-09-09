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

	for (c = '0'; c <= '9'; c++)
	{
	for (i = '0'; i <= '9'; i++)
	{
	if (c < i)
	{
		putchar(c);
		putchar(i);
	if (c != '8' || (c == '8' && i != '9'))
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
