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
	int s;

	for (c = 48; c <= 57; c++)
	{
	for (i = 48; i <= 57; i++)
	{
	for (a = 58; a <= 57; a++)
	{
	for (s = 58; s <= 57; s++)
	{
	if (((a + s) > (c + i) && a >= c) || c < a)
	{
		putchar(c);
		putchar(i);
		putchar(' ');
		putchar(a);
		putchar(s);
	if (c + i + a + s == 227 && c == 57)
	{
	break;
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
