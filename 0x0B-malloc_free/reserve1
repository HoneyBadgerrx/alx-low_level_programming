#include "main.h"
/**
 * strtow - splits a string into words
 *
 * @str: string to be split
 * Return: pointer to array containing words
 */
char **strtow(char *str)
{
	int i, j, maxword, word = 0, wordcount = 1;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; ++i)
	{
		if (word > maxword)
			maxword = word;
		if (str[i] == ' ')
		{
			word = 0;
			++wordcount;
			continue;
		}
		word++;
	}
	if (word > maxword)
		maxword = word;
	p = (char **)malloc(wordcount * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < wordcount; ++i)
	{
		p[i] = (char *)malloc(maxword * sizeof(char));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; ++j)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < maxword; ++j)
		{
			if (*str == ' ')
			{
				++str;
				while (j < maxword)
				{
					p[i][j] = '\0';
					++j;
				}
				break;
			}
			p[i][j] = *str;
			++str;
		}
	}
	return (p);
}
