#include "main.h"

/**
 * _isalpha - Return 1 if parameter is a letter of the alphabet
 * @c: unsigned int value to be compared with ASCII value
 * Return: 1 if its alphabet else 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
