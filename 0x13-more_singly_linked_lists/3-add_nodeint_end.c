#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: head of linked list
 * @n: integer
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;	/*Declaring a new pointer to be inserted*/
	listint_t *tmp;	/*Declaring a temporary pointer which is also a temporary node*/

	new = malloc(sizeof(listint_t));	/*Dynamic memory allocation in heap*/
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;	/*Transversing the list*/
	}
	tmp->next = new;	/*The insertion happens here*/
	return (new);
}
