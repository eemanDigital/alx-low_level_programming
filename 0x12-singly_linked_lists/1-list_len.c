#include "lists.h"
/**
 * list_len - function that returns the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t number_of_node_element;

	number_of_node_element = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_node_element++;
	}
	return (number_of_node_element);
}
