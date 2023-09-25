#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 48)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 56 || j < 57)
			{
				putchar(44 + '0');
				putchar(32 + '0');
			}
			j++;
		}

		i++;
	}

	putchar(10);

	return (0);
}
