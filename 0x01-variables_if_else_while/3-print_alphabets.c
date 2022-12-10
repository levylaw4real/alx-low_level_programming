#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lower and upper case followed by newline
 *
 * Return: Always 0
 */
int main(void)
{
	int chr = 'a';
	int CHR = 'A';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	while (CHR <= 'Z')
	{
		putchar(CHR);
		CHR++;
	}

	putchar('\n');
	return (0);
}
