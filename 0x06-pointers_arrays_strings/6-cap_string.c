#include "main.h"
/**
 * cap_string - cpas evry word
 *
 * @src: source string
 * Return: char
 */

char *cap_string(char *)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		if (str[index - 1] == ' ' || str[index - 1] == '\t' || str[index - 1] == '\n' || str[index - 1] == ',' || str[index - 1] == ';' || str[index - 1] == '.' || str[index - 1] == '!' || str[index - 1] == '?' || str[index - 1] == '"' || str[index - 1] == '(' || str[index - 1] == ')' || str[index - 1] == '{' || str[index - 1] == '}')
			src[i] -= 32;
	}
	return (src);
}
