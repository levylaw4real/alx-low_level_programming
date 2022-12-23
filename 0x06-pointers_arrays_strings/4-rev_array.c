#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, cnt;

	n = n - 1;
	cnt = 0;
	while (cnt <= n)
	{
		temp = a[cnt];
		a[cnt++] = a[n];
		a[n--] = temp;
	}
}
