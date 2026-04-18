#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * struct format_op - matches format specifier with function
 * @op: format specifier
 * @f: function pointer
 */
typedef struct format_op
{
	char *op;
	void (*f)(va_list *);
} format_op_t;

/**
 * print_char - prints a char argument
 * @args: va_list pointer
 *
 * Return: void
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_int - prints an integer argument
 * @args: va_list pointer
 *
 * Return: void
 */
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - prints a float argument
 * @args: va_list pointer
 *
 * Return: void
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - prints a string argument
 * @args: va_list pointer
 *
 * Return: void
 */
void print_string(va_list *args)
{
	char *s;

	s = va_arg(*args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything based on format
 * @format: list of format specifiers
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *separator;

	format_op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	separator = "";

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (format[i] == ops[j].op[0])
			{
				printf("%s", separator);
				ops[j].f(&args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
