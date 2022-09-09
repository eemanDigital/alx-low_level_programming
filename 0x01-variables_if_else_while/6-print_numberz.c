#include <stdio.h>
#include <unistd.h>
/**
 * main - my entry point
 *
 * Description: code to print single digit
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
