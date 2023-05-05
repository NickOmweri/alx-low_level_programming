#include "main.h"

/**
 * get_bit - It returns the value of a bit at an index in a decimal number.
 * @index: Is the index of the bit.
 * @n: Is the number to search.
 *
 * Return: The value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
