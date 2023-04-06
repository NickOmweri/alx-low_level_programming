#include "main.h"

/**
 * Sets the value of a given bit to 0.
 * @n is the pointer to the number to change.
 * @index is the index of the bit to clear.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
