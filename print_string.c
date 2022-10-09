#include "main.h"

/**
 *print_string - function to print a string
 *@arg: arg recived
 *Return: the number of characters printed
 */

int print_string(va_list arg)
{
	char *str;
	int counter;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(nul)";
	for (counter = 0; str[counter]; counter++)
		_putchar(str[counter]);
	return (counter);
}
