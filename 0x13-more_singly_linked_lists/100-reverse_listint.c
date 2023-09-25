#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: head node
 * Return: node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *back;

	back = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}

	*head = back;

	return (*head);

}
