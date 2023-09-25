#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of linked list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
/* set a variable to count the nodes*/
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
/* return the node counts*/
	return (counter);
}
