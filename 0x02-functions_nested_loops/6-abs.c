#include "main.h"

/**
 * _abs - calulate the absolute value of an integer
 * @n: operand
 *
 * Return: returns result as unsigned int to caller func
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}
