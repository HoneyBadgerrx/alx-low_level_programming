#include "main.h"
/**
 * _strspn - max bytes where acceot can be found in s
 *
 * @s: character to search in
 * @accept: string to be searched for
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int v;
	unsigned int p = 0;

	for (i = 0; accept[i] != '\0'; ++i)
	{
		for (v = 0; s[v] != ',' && s[v] != '\0'; ++v)
		{
			if (accept[i] == s[v])
			{
				if (p <= v)
					p = v + 1;
				break;
			}
		}
	}
	return (p);
}
