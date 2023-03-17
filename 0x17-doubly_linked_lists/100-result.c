#include <stdio.h>

/**
 * main - find palindrome of largest product of two 3-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int product, max = 0, i, j, c;
	int d[6];

	for (i = 999; i > 100; i--)
	{
		for (j = 999; j >= i; j--)
		{
			product = i * j;
			c = 0;
			while (product)
			{
				d[c++] = product % 10;
				product /= 10;
			}
			if (c >= 5 && (d[0] == d[c - 1]) && (d[1] == d[c - 2]) && (d[2] == d[c - 3]))
			{
				int palindrome = i * j;
				if (palindrome > max)
				{
					max = palindrome;
				}
			}
		}
	}
	printf("%d\n", max);
	return (0);
}
