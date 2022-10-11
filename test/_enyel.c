#include "main.h"
#include <stdio.h>

/**
 * _enyel - Print enyel
 * @format: arguments of input
 * @ops: arguments arrys
 * @arg: list of arg
 * Return: return the amount of characters
 */

int _enyel(const char *format, op_t ops[], va_list arg)
{

	int i, j, r, print = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; ops[j].op != NULL; j++)
			{
				if (format[i + 1] == ops[j].op[0])
				{
					r = ops[j].f(arg);
					if (r == -1)
						return (-1);
					print += r;
					break;
				}
			}
				if (ops[j].op == NULL && format[i + 1] != ' ')
				{
					if (format[i + 1] != '\0')
					{
						_putchar(format[i]);
						_putchar(format[i + 1]);
						print = print + 2;
					}
					else
						return (-1);
				}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			print++;
		}
	}
	return (print);
}
