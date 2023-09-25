#include <stdio.h>
/**
 * main - Entry and exit point of the program.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
			continue;
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
