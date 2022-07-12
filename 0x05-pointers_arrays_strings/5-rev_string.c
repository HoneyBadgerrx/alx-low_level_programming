#include "main.h"
/**
 * rev_string - string in reverse
 *
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i = 1;

	strcpy(copy, s);
	while ((len - i) >= 0)
	{
		s[i - 1] = copy[len - i];
		++i;
	}
}
