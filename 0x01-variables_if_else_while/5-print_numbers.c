#include <stdio.h>
#include <stdlib.h>

/**
 * main - print integers from 0-10
 *
 * Return: 0
 */

int main(void)

{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');

	return (0);

}
