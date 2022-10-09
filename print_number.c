#include "main.h"

/**
 *print_number - function to print integers
 *@n: argument
 *Return:Always
 */

int print_number(int n)
{
	int ban = 0, i, len, m;

	i = 0;
	len = 0;
	m = 0;


	if (n == INT_MIN)
	{
		n = n + 1;
		ban = 1;
	}

	if (n < 0)
	{
		n = -n;
		_putchar('-');
		i++;
	}

	if (n / 10 != 0)
		len = (m + print_number(n / 10));

	if (ban == 1)
	{
		_putchar('8');
	}
	else
	{
		_putchar(n % 10 + '0');
	}

	i++;

	return (i + len);

}
