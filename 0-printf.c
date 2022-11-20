#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints string based on  a format specifier
 * @format: is a format specifier
 * Return: number of characters printed excluding null byte\
 * used to end output to strings
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int count;
	form_t get_opt[] = {
		{"c", set_char},
		{"s", set_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	if (!format)
	{
		return (-1);
	}

        va_start(valist, format);
	count = parse_format(format, get_opt, valist);
	va_end(valist);

	return (count);
}
