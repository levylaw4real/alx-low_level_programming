#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of the program
 * @argc: number of arguments
 * @argv: array of rguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
