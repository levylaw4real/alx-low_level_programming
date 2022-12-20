#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: int a
 * @b: int b
 * int c: holds the swapped value
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
