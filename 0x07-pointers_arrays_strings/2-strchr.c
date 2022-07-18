#include "main.h"
/**
 * _strchr - find char c in string
 *
 * @c: character to search for
 * @s: string to be searched
 * Return: pointer to char c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
