#include <stdio.h>
#include <unistd.h>
/**
 * main - my entry point
 *
 * Description: code to printb base 16
 * Return: 0
 */
int main(void)
{
	char d;
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
