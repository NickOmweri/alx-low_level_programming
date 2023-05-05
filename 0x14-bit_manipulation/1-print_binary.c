#include "main.h"

/**
 * print_binary - It prints the binary equivalent of a decimal number.
 * @n: Is the number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int i, x = 0;
	unsigned long int present;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
