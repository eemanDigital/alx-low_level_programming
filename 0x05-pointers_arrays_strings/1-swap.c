#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
