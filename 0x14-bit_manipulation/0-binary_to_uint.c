#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number being passed
 * Return: 0 if not b is not binary else converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int aee = 0, cee = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	for (aee = 0; b[aee] != '\0'; aee++)
		;
	aee--;
	while (aee >= 0)
	{
		if (b[aee] != '0' && b[aee] != '1')
			return (0);
		result = result + (b[aee] - '0') * (1 << cee);
		aee--;
		cee++;
	}
	return (result);	/*return the base 2 value*/
}
