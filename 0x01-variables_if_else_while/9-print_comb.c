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
	int d = 0;

	while (d <= '9')
	{
		putchar(d + 48);
	if (d != 9)
	{
		putchar(',');
		putchar(' ');
	}
	d++;
	}
	putchar('\n');
	return (0);
}
