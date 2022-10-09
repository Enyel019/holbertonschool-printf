#include "main.h"

/**
 *print_integer - function to print integers
 *@arg: arg recived
 *Return: the number of integers printed
 */

int print_integer(va_list arg)
{

	int count = 0;

	count = count + print_number(va_arg(arg, int));

	return (count);
}
