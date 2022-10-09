#include "main.h"

/**
 * _printf - Print string input
 * @format: arguments
 * Return: return the amount of characters
 */


int _printf(const char *format, ...)
{

	op_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}};

	int print = 0;
	va_list arg;

	if (format != NULL)
	{
		va_start(arg, format);
		print = _enyel(format, ops, arg);
		va_end(arg);
	}
	else
	{
		return (-1);
	}

	return (print);
}
