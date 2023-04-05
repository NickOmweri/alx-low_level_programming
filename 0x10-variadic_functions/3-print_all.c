#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all; prints anything
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(list, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(list, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(list, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(list, char *);
			if (!str)
			{
				str = "(nil)";
			}
			printf("%s%s", sep, str);
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
}
