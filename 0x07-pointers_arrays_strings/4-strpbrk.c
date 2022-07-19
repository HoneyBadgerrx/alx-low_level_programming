#include "main.h"
/**
 * _strpbrk - min bytes where acceot can be found in s
 *
 * @s: character to search in
 * @accept: string to be searched for
 * Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int v;
	char *p = NULL;
	int counter = strlen(s);

	for (i = 0; accept[i] != '\0'; ++i)
	{
		for (v = 0; s[v] != '\0'; ++v)
		{
			if (accept[i] == s[v])
			{
				if (counter > v)
				{
					p = &s[v];
					counter = v;
				}
				break;
			}
		}
	}
	return (p);
}
