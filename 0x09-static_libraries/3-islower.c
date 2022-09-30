#include "main.h"
/**
 * _islower - chech lowercase character
 *
 * @c: check function input
 *
 * Return: returns 1 or 2
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
}
