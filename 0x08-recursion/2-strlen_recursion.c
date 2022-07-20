#include "main.h"
/**
 * _strlen_recursion - return string length
 *
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	++len;
	len += _strlen_recursion(s + 1);
	return (len);
}
