#include <unistd.h>
/**
 * _putchar - to wrtie the character of  c to stdout
 * @c: this is character to print
 * Return 0 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
