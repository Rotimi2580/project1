#include "lists.h"

/**
 * delete_nodeint_at_index - free node at index of a linked list
 * @head: head of linked list
 * @index: index to fee
 * Return: success 1, failure -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *current;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	prev = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	x = 0;
	while (current->next != NULL)
	{
		if (x == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		x++;
	}
	if (x == index)
	{
		prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
