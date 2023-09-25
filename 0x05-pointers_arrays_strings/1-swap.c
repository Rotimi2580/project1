#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: Pointer variable 1.
 * @b: Pointer variable 2.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
