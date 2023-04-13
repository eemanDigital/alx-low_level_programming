#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the Interpolation search
 * algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: Length of the array
 * @value: key value to search for
 * Return: Index of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double x;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		x = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + x);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		if (low == high)
			break;
	}

	return (-1);
}

