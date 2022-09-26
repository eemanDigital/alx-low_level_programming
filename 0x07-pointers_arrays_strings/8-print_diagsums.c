#include <stdio.h>

/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: null
*/

void print_diagsums(int *a, int size)
{
	int i, x1, x2;

	x1 = 0;
	x2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			x1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			x2 += a[i];
	}
	printf("%d, %d\n", x1, x2);
}
