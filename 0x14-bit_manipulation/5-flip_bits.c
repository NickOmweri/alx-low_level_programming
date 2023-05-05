#include "main.h"

/**
 * flip_bits - It tallys the number of bits to change.
 * @n: Is the first number.
 * @m: Is the second number.
 *
 * Return: The number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		present = exclusive >> x;
		if (present & 1)
			y++;
	}

	return (y);
}
