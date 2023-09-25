#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t ln;	/*Declaring a variable to be used to count numbers of nodes*/

	ln = 0;	/*Initialising the variable*/
	while (h != NULL)
	{
		ln++;	/*incrementing the variable used to count size of the nodes*/
		printf("%d\n", h->n);	/*printing the data of a node*/
		h = h->next;	/*accessing the next node-pointer*/
	}
	return (ln);	/*returning the total number of nodes*/
}
