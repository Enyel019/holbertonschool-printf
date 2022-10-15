#include "main.h"

/**
*print_char - print char at printf
*@arg: arguments
*Return: return the amount of characters
*/

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}