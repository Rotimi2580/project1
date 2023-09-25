#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of linked list
 * @n: integer
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new; /*Declaring a pointer which is a new node to be inserted*/

	new = malloc(sizeof(listint_t));	/*Dynamic memory allocation using malloc to allocate memory for the new node*/
	if (new == NULL)	/*assert new memory space from malloc not null*/
		return (NULL);
	new->n = n;	/*Dereferencing the data side of new node to assign it a parameter n*/
	new->next = *head;	/*Pointing the next of new to value value at address in head*/
	*head = new;	/*now head is linked completely with new node*/

	return (new);
}
