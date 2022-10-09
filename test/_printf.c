#include "main.h"

/**
 * _printf - function to print
 *@format: string is composed of zero or more directives
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list argument;
	int printcounter = 0;

	va_start(argument, format);
	if (*format != '\0')
	{
		for (; *format != '\0'; format++)
		{
			if (*format == '%')
			{
				format++;
				if (*format == 'c')
					printcounter += print_char(argument);
				if (*format == 's')
					printcounter += print_str(argument);
				if (*format == 'i' || *format == 'd')
					printcounter += print_int(argument);
				if (*format == '%')
				{
					_putchar('%');
					printcounter += 1;
				}
				if (*format == '\0')
					return (-1);
			}
			else
			{
				_putchar(*format);
				printcounter++;
			}
		}
	}
	if (format == NULL)
		return (-1);
	va_end(argument);
	return (printcounter);
}
