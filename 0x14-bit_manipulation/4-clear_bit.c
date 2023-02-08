#include "main.h"
/**
	* clear_bit - sets the value of a bit to 0 at a given index
	* @n: unsigned long to change
	* @index: index to change to zero
	* Return: 1 sucess or -1 error
	*/
int clear_bit(unsigned long int *n, unsigned int index)
{
		if (!n || index >= sizeof(unsigned long int) * 8)

			return (-1);

		*n &= ~(1UL << index);

	return (1);
}
