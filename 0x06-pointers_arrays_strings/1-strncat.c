#include "main.h"

/**
 * _strncat - concatenate string, max n
 *
 * @n: any inerger
 * @dest: destination str
 * @src: source string
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[dlen + i] = src[i];
	}
	dest[dlen + i] = '\0';
	return (dest);
}
