#include "main.h"

/**
 * _strncpy - copy string from src to dest
 *
 * @n: any inerger
 * @dest: destination str
 * @src: source string
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
