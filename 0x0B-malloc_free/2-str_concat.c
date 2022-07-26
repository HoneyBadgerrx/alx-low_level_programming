#include "main.h"
/**
 * str_concat - concatenates 2 given strings
 *
 * @s1: first string
 * @s2: following string
 * Return: pointer to concat string in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, size;
	char *p;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	size = strlen(s1) + strlen(s2) + 1;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	while (*s1)
	{
		p[i] = *s1;
		++i;
		++s1;
	}
	while (*s2)
	{
		p[i] = *s2;
		++i;
		++s2;
	}
	p[i] = '\0';
	return (p);
}
