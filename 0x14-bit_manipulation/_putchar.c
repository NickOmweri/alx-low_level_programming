#include "main.h"
#include <unistd.h>

/**
 * _putchar - It writes the character c to standard output.
 * @c: Is the character to print.
 *
 * Return: 1 on sucess.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
