#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a signgly linked list
 * @head: head node
 * @index: position of the node
 * Return: node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;	/*Declaring a variable to be used to get the index*/

	if (head == NULL)	/*checking content of the head node*/
		return (NULL);

	node = head;
	n = 0;
	while (node != NULL)	/*asserting node not NULL*/
	{
		if (n == index)	/*performs a check on the given index and the count*/
			return (node);	/*if equal, the node at the position is returned*/
		node = node->next;	/*if index not yet equal to count, points to next node*/
		n++;
	}
	return (NULL);	/*this happens only when node is NULL*/
}
