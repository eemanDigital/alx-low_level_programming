#include "search_algos.h"

/**
  * _binary_search - function that Searches for a value in
  * a sorted array of integers using binary search.
  *
  * @array: A pointer to the first element of the array to search.
  * @low: beginning of index of the array/sub-array.
  * @high: end index of the array/sub-array.
  * @value: The value to search for.
  *
  * Return: If the value is absent returns-1, else
  * return index.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The length of elements in the array.
  * @value: The value to be searched for.
  *
  * Return: If the value or array is absent returns NULL, -1.
  *         else returns location of index.
  *
  * Description: output a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, high;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	high = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high);
	return (_binary_search(array, i / 2, high, value));
}
