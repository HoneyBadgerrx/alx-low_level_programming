#include "main.h"
/**
 * _strdup - duplicates given string
 *
 * @str: string to be duplicated
 * Return: returns pointer to duplicate string
 */
char *_strdup(char *str)
{
	int size, i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = *str;
		++i;
		++str;
	}
	return (p);
}
