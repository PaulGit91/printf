#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * Flags
 */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/**
 * Sizes
 */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct format - struct op
 * @format: the format
 * @fun: function associated
 */
struct format
{
	char format;
	int (*fun)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct format format_t - Struct op
 * @format: the format
 * @format_t: function associated
 */
typedef struct format format_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);

/**
* Functions to handle other specifiers
*/
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

#endif
