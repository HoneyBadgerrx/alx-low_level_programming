#include "main.h"
/**
 * string_nconcat - concats n number of string s2 to s1
 *
 * @s1: first string
 * @s2: second string
 * @n: number of string s2 to be copied
 * Return: pointer to result char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;
	char *p;

	if (s2 != NULL)
	{
		size2 = strlen(s2);
		if (size2 > n)
			size2 = n;
	}
	if (s1 != NULL)
		size1 = strlen(s1);
	p = malloc(size1 + size2 + 1);
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; ++i)
			p[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; j < size2; ++j)
		{
			p[i] = s2[j];
			++i;
		}
		p[i] = '\0';
	}
	return (p);
}
