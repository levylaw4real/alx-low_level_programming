#include <stdio.h>
/**
 * main - entry point compile starts from the main
 * Description: prints the name of the file it was compiled from
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
