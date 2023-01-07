#include "main.h"
/**
 * sqrt_helper - brutes/recurses to find sqroot of number
 * @a: number
 * @b: number to test for the square root of @a
 * Return: square root
 */
int sqrt_helper(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (sqrt_helper(a, b + 1));

	return (1);
}
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: int
 * Return: square root of int @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_helper(n, 1));
}
