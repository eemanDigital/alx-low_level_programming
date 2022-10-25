#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		/*set head address to current node*/
		current = *head;

		/*iterate through the whole list*/
		while ((temp = current) != NULL)
		{
			/*set next node to current*/
			current = current->next;
			/*free temp, that is the current node*/
			free(temp);
		}
		*head = NULL;
	}
}
