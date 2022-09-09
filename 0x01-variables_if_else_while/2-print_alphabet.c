#include <stdio.h>
/**
 * main - entry point
 *
 * Description: to print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
