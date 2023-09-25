#include "main.h"

/**
 * set_bit - function to set a bit at given indext to 1
 * @n: pointer to an int
 * @index: index at bit to change
 * Return: 1 if sucessful -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bt;

	if (n == 0)
		return (-1);
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	bt = 1;
	bt = bt << index;
	*n = *n | bt;
	return (1);
}
