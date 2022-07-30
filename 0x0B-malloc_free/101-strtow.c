#include "main.h"
/**
 * strtow - splits a string into words
 *
 * @str: string to be split
 * Return: pointer to array containing words
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, maxword = 0, word = 0, wordcount = 1;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; ++i)
	{
		if (word > maxword)
			maxword = word;
		while (str[i] == ' ')
		{
			word = 0;
			++wordcount;
			++i;
		}
		word++;
	}
	p = (char **)malloc(wordcount * sizeof(char *));
	if (p == NULL)
		return (NULL);
	maxword++;
	for (i = 0; i < wordcount; ++i)
	{
		p[i] = malloc(maxword * sizeof(char));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; ++j)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j <= maxword + 1; ++j)
		{
			while (str[k] == ' ' || str[k] == '\0')
			{
				k++;
				p[i][j] = '\0';
				break;
			}
			p[i][j] = str[k];
			++k;
		}
	}
	return (p);
}
