#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_node = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_node;

	tmp_node = head;
	while (tmp_node)
	{
		printf("[%p] %d\n", (void *)tmp_node, tmp_node->n);
		counter++;
		tmp_node = tmp_node->next;
		l_n = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (tmp_node == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_node, tmp_node->n);
				return (counter);
			}
			l_n = l_n->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
