#include "main.h"
/**
 * wildcmp - compares 2 strings
 *
 * @s1: 1st string
 * @s2: second string
 * Return: 1 if similar, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int ss1 = strlen(s1);
	int ss2 = strlen(s2);

	if (s2[ss2 - 1] == '*')
		return (1);
	if (s1[ss1 - 1] != s2[ss2 - 1])
		return (0);
	if (*s2 == '*')
		return (1);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
