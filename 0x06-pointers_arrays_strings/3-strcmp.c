#include "main.h"

/**
 * _strcmp - Compares two strings character by character
 *
 * @s1: string1
 * @s2: string2
 * Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int cnt, compVal;

	cnt = 0;

	while (s1[cnt] == s2[cnt] && s1[cnt] != '\0')
	{
		cnt++;
	}

	compVal = s1[cnt] - s2[cnt];
	return (compVal);
}

