#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;	/*Declaration of a temporary pointer*/

	tmp = head;
	while (tmp != NULL)	/*transversing the list of nodes and calling on free function to release the memory in heap*/
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
