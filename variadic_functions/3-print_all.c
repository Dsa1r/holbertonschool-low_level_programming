#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */

typedef struct format_op
{
	char *op;
	void (*f)(va_list *);
} format_op_t;

/* helper functions */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

void print_string(va_list *args)
{
	char *s = va_arg(*args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *sep = "";

	format_op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (ops[j].op)
		{
			if (format[i] == ops[j].op[0])
			{
				printf("%s", sep);
				ops[j].f(&args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
