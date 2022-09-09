#include <stdio.h>
/**
 * main - entry point
 *
 * Description: to print alphabet in lowercase
 * from reverse side
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
