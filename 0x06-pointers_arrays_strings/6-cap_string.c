#include "main.h"
/**
 * cap_string - cpas evry word
 *
 * @src: source srcing
 * Return: char
 */

char *cap_string(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		if (src[i - 1] == ' ' || src[i - 1] == '\t' || src[i - 1] == '\n' || src[i - 1] == ',' || src[i - 1] == ';' || src[i - 1] == '.' || src[i - 1] == '!' || src[i - 1] == '?' || src[i - 1] == '"' || src[i - 1] == '(' || src[i - 1] == ')' || src[i - 1] == '{' || src[i - 1] == '}')
			src[i] -= 32;
	}
	return (src);
}
