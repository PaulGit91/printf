#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct format - This is a typedef struct.
 * @opt: Pointer type char.
 * @call_fun: Pointer to call the function.
 */
typedef struct format
{
	char *opt;
	int (*call_fun)();
} format_t;

int _printf(const char *format, ...);
int parse_format(const char *format, format_t get_opt[], va_list list);
int set_string(va_list list);
int set_char(va_list list);
int print_percent(__attribute__((unused))va_list list);

#endif
