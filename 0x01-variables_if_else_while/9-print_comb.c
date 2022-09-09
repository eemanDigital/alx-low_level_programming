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
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
