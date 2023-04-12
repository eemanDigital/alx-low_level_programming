#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: array is a pointer to the first element of the array to search in
 * @size: length of the array
 * @value: key value to serach for
 * Return: EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
	{
		return (-1);
	}
	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = low + (high - low) / 2;

		if (value == array[i])
			return (i);
		if (value < array[i])
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);

}
