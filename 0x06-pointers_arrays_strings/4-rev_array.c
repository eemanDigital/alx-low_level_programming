#include "main.h"
/**
 * reverse_array - a function to reverse content of int
 * @a: pointer var to array int
 * @n: number element of swap
 * Retunr: 0
 */
void reverse_array(int *a, int n)
{
	int tp, z, y;

	z = 0;
	y = n - 1;

	while (z < y)
	{
	tp = a[z];
	a[z] = a[y];
	a[y] = tp;
	z++;
	y--;
	}
}

