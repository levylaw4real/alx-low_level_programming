#include "main.h"
/**
 * string_toupper - changes all lowercase letters of  a string to uppercase
 * @word: string
 *
 * Return: uppercase string
 */
char *string_toupper(char *word)
{
	int len;

	len = 0;

	while (word[len] != '\0')
	{
		if (word[len] >= 97 && word[len] <= 122)
		{
			word[len] = word[len] - 32;
		}
		len++;
	}
	return (word);
}
