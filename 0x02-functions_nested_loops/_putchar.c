#include <unistd.h>
/**
 * _putchar - write char c to stdout
 * @c: this is the char to print
 * Return: 0;
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
