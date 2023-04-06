#include "main.h"

/**
 * Converts a binary number to an unsigned int.
 * @b is a string containing the binary number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int u_integer = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		u_integer = 2 * u_integer + (b[i] - '0');
	}

	return (u_integer);
}
