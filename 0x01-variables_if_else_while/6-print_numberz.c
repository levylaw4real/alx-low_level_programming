#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints single digits of base 10 starting from 0, followed by a new line
 *
 * Return: 0
 */

int main(void)

{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	putchar('\n');

	return (0);

}
