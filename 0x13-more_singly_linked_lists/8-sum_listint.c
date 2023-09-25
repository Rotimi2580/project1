#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a given linked list
 * @head: head node
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int total;	/*Declared a sum variable*/
	listint_t *node;	/*Declared a node for transversing*/

	total = 0;

	if (head == NULL)	/*check content of head*/
		return (total);
	node = head;

	while (node != NULL)
	{
		total += node->n;	/*adding the data side*/
		node = node->next;
	}
	return (total);
}
