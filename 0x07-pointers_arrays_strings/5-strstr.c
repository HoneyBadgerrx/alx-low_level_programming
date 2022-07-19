#include "main.h"

/**
 * _strstr - checks for needle string in str haystack
 *
 * @haystack: string to be searched
 * @needle: string to search for
 * Return: pointer to needle in hay
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int v;
	int counter;
	int size = strlen(needle);

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; ++i)
	{
		if (haystack[i] == needle[0])
		{
			v = 0;
			counter = 0;
			while (haystack[i + v] == needle[v])
			{
				++counter;
				++v;
			}
			if (counter == size)
				return (haystack + i);
		}
	}
	return ('\0');
}
