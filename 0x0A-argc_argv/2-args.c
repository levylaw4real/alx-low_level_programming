#include <stdio.h>
#include "main.h"
/**
 * main - Print arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{

	int count = 0;

	if (argc > 0)
	{
		/*access argument in while loop and print*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
