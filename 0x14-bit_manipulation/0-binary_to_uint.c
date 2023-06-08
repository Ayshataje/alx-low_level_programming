#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if b is NULL or b is not a binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c, k;
	int i;

	c = 0;
	i = 0;
	k = 1;
	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			c = c + k;
		}
		i--;
		k = k * 2;
	}
	return (c);
}
