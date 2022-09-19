#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: array pointer onei
 * @n: array pointer two
 * Description: Numbers must be separated by comma,
 * followed by a space
 * numbers should be displayed in the
 * same order as they are stored in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	index = 0;
	for (n--; n >= 0; n--, index++)
	{
	printf("%d", a[index]);
	if (n > 0)
	{
	printf(", ");
	}
	}
	printf("\n");
}
