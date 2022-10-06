#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: NULL or a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *r;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	r = memory;

	for (index = 0; index < (size * nmemb); index++)
		r[index] = '\0';

	return (memory);
}
