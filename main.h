#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 *
 */

typedef struct format
{
	char *opt;
	int (*call_fun)();
} form_t;

/* int.c */
int print_integer(va_list);
int print_number(va_list args);

#endif
