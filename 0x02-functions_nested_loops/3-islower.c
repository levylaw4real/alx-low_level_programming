#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * 
 * @c:  value to be compared with the ASCII value
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
