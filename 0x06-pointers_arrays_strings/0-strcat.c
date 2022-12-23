#include <stdio.h>
#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: string1
 * @src: string2
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}

	dest[len] = '\0';
	return (dest);
}
