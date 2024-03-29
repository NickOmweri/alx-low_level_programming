#include "main.h"

/**
 * set_bit - It places a bit at a given index to 1.
 * @index: Is the index of the bit to set to 1.
 * @n: Is a pointer to the number to change.
 *
 * Return: -1 if it fails and 1 if it succeeds.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
