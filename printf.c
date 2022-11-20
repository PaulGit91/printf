#include "main.h"
/**
 * _printf - function that prints based on format specifier
 * @format: takes in format specifier
 * Return: return pointer to index
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count;
	format_t get_opt[] = {
		{"c", set_char},
		{"s", set_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	if (!format)
	{
		return (-1);
	}

	va_start(list, format);
	count = parse_format(format, get_opt, list);
	va_end(list);


	return (count);
}
