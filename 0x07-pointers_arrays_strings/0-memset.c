#include "main.h"

/*
 * _memset - sets mem value
 *
 * @n: amount of memory to alter
 * @s: pointer to memory
 * @b: character to place in memory
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		++i;
	}
	return (s);
}
