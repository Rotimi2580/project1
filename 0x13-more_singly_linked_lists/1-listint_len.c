#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a linked list
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t wd;	/*Declaring a varible for the number of element*/

	wd = 0;	/*Initialising a variable for the number of element in the node*/
	while (h != NULL)	/*checking if the pointer in the node not null*/
	{
		wd++;	/*increment the element count*/
		h = h->next;	/*move to the next node*/
	}
	return (wd);	/*return number of element to main*/
}
