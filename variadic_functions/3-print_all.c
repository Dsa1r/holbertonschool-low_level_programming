#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *sep;
	char *str;

	i = 0;
	sep = "";
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i')
		{
			if (format[i] == 'c')
				printf("%s%c", sep, va_arg(args, int));
			if (format[i] == 'i')
				printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
		}

		if (format[i] == 'f' || format[i] == 's')
		{
			str = va_arg(args, char *);
			if (format[i] == 'f')
				printf("%s%f", sep, *(double *)&str);
			if (format[i] == 's')
			{
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
			}
			sep = ", ";
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
