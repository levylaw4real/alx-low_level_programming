#include "main.h"
/**
 * get_bit - return value of a bit at a given index
 * @n: unsigned long int to search
 * @index: index
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) return -1;
    return (n & (1UL << index)) != 0;
}
