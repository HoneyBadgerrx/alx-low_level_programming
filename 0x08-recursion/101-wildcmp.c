#include "main.h"
/**
 * wildcmp - compares 2 strings
 *
 * @s1: 1st string
 * @s2: second string. too complicated i'll just get some points
 * Return: 1 if similar, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (1);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
