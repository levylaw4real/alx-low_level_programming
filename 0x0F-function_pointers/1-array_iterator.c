#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - calls a function to act on array elements
 * @array: array
 * @size: size of the array
 * @action: function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
