#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: the converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
		unsigned int uint = 0;

		if (!b)
			return (0);

		while (*b)
		{
			if (*b == '0' || *b == '1')
			{
				uint = (uint << 1) | (*b - '0');
				b++;
			}
			else
					return (0);
	}

		return (uint);
}
