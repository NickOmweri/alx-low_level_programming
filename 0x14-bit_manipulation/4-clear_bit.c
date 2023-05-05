#include "main.h"

/**
 * clear_bit - It sets the value of a given bit to zero.
 * @index: Is the index of the bit to clear.
 * @n: Is a pointer to the number to change.
 *
 * Return: -1 if it fails and 1 if it succeeds.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
