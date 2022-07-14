#include "main.h"

/**
 * _strcat - concatenate string
 *
 * @dest: destination str
 * @src: source string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int dlen = strlen(dest);
	int i;

	for (i = 0; src[i] != '\n' ; i++)
	{
		dest[dlen + i] = src[i];
	}
	dest[dlen + i] = '\0';
	return (dest);
}
