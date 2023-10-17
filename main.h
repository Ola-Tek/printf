#ifndef _MAIN2_H_
#define _MAIN2_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct ops - structure defining fuctions
 *
 * @specifier: The format.
 * @f: the associated function
 */
struct ops
{
	char specifier;
	int (*f)(va_list glist);
};

/**
 * op_t - holds the necessary function for formatted printing
 *
 * This typedef is used to provide a shorthand for
 * struct ops
 */
typedef struct ops op_t;

int _printf(const char *format, ...);
int pchar(va_list list);
int pstr(va_list list);
int handle_specifier(char c, va_list list);

#endif
