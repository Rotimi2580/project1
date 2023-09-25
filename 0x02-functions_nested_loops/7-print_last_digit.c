#include "main.h"

/**
 * print_last_digit - Prints last digit.
 * @n: n is an integer.
 * Description: Prints the last digit of a value.
 * Return: Integer.
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
