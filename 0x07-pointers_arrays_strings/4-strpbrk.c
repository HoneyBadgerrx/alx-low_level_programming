#include "main.h"
/**
 * _strpbrk - min bytes where acceot can be found in s
 *
 * @s: character to search in
 * @accept: string to be searched for
 * Return: unsigned int
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int v;
	unsigned int p = 0;

	for (i = 0; accept[i] != '\0'; ++i)
	{
		for (v = 0; s[v] != '\0'; ++v)
		{
			if (accept[i] == s[v])
			{
				if (p > v)
					p = v;
				break;
			}
		}
	}
	return (s + p);
}
