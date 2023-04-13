#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: length of the array
 * @value: key element to be search for
 * Return: index
 */
int jump_search(int *array, size_t size, int value)
{
	int i, a, b, prev;

	if (array == NULL || size == 0)
		return (-1);

	a = (int)sqrt((double)size);
	b = 0;
	prev = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		b++;
		prev = i;
		i = b * a;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
