#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
