#include "main.h"

/**
 * get_endianness - It scouts if a machine is little or big endian.
 *
 * Return: 1 if little and 0 if big.
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
