#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: head node
 * @idx: position for insertion
 * @n: integer dataof new  node
 * Return: address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new, *prev;
	unsigned int x;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	node = *head;
	prev = *head;
	x = 0;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node != NULL)
	{
		if (x == idx)
		{
			new->next = node;
			prev->next = new;
			return (new);
		}
		prev = node;
		node = node->next;
		x++;
	}
	if (idx == x)
	{
		prev->next = new;
		return (new);
	}

	free(new);
	return (NULL);
}
