#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - main entry function for cgar print
 * @arg: input variable
 * Return: void
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_int - main entry to print integer
 * @arg: input variable
 * Return: void
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_float - main entry to print float
 * @arg: this is the input
 * Return: void
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_string - this function prints string
 * @arg: input argument
 * Return: void
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - main entry function
 * @format: lists all types of argument passed to function
 */
void print_all(constant char * const format, ...)
{
	int i = 0;
	char *sep = "";

	va_list args;

	va_start(args, format);

	void (*print_function[])(va_list) = {
		print_char,
		print_int,
		print_float,
		print_string,
	};

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				printf("%s", sep);
				print_func[format[i] - 'c'](args);
				sep = ", ";
				break;
			default:
				break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
