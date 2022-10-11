#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**  Function printf **/
/**********************/

/**
 * struct op - structure to use in printf
 * @op: operator of structure
 * @f: function of work
 */

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list str);
int print_int(va_list arg);
int print_percent(va_list arg);
int print_integer(va_list arg);
int print_number(int n);
int print_dec(va_list arg);


int _enyel(const char *format, op_t ops[], va_list arg);
#endif
