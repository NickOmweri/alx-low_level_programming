#include "main.h"

/**
 * Counts the number of bits to change.
 * @n is the first number.
 * @m is the second number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int y = n ^ m;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
			c++;
	}

	return (c);
}
