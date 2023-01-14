#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two integers
 * @argc: argument count
 * @argv: argument array
 * Return: 0 success, 1 error
 */
int main(int argc, char **argv)
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;

	printf("%i\n", res);

	return (0);
}
