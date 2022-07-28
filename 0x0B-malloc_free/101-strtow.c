#include "main.h"
/**
 * strtow - splits a string into words
 *
 * @str: string to be split
 * Return: pointer to array containing words
 */
char **strtow(char *str)
{
	int i, j, k = 0, maxword = 0, word = 0, wordcount = 1;
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
		p[i] = (char *)malloc(1 + (maxword * sizeof(char)));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; ++j)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < maxword; ++j)
		{
			printf("%c\n", str[k]);
			if (str[k] == ' ')
			{
				++k;
				p[i][j] = '\0';
				break;
			}
			p[i][j] = str[k];
			++k;
		}
	}
	return (p);
}
void main(void)
{
	int i = 0;
	char **p = strtow("Final test ot trsts");
	printf("%s\n", p[1]);
}
