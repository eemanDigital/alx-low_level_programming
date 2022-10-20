#include "lists.h"

/**
 * free_list - programme that frees a linked list
 * @head: head of the linked list.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
