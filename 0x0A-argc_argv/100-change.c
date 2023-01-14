#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*Variables*/
	int position, total, change, aux;
	int cents[] = {25, 10, 5, 2, 1};

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents[position] != '\0')
	{
		if (total >= cents[position])
		{
			aux = (total / cents[position]);
			change += aux;
			total -= cents[position] * aux;
		}

		position++;
	}
	printf("%d\n", change);

	return (0);
}
