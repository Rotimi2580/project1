#include "main.h"

/**
 * flip_bits - function to count number of bits and flip
 * @n: number to be flipped
 * @m: number to be flipped to
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int aee;

	aee = n ^ m;
	while (aee != 0)
	{
		if ((aee & 1) == 1)
			i++;
		aee = aee >> 1;
	}
	return (i);
}
