#include "main.h"
/**
 * print_alphabet - Entry points
 *
 * Return: Always 0 for success.
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
