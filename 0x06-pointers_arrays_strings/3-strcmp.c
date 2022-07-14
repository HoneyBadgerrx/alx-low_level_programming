#include "main.h"

/**
 * _strcmp - compares to strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
