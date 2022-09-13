#include"main.h"
/**
 * main - My entry point function
 *
 * Description: program that prints _putchar
 * Return: 0
 */
int main(void)
{
	char string[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	_putchar(string[ch]);
	_putchar('\n');
	return (0);
}
