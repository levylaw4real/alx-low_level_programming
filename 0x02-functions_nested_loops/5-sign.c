#include "main.h"

/**
 * print_sign - return 0 if lowercase, return 1 if lowercase
 *
 * @n : number to check
 * Return: 0 or 1
 *
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
