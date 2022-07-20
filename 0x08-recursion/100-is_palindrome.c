#include "main.h"
/**
 * helperpalin - reduce len till - for even strings and 0 for odd
 *
 * @s: char after last check
 * @len: position  of equivalent char position from end of string
 * Return: 0 if it is not a palindrome and 1 if it is
 */
int helperpalin(char *s, int len)
{
/*	printf("%c %d\n", *s, len); */
	if (len <= 0)
		return (1);
	if (*s != s[len])
		return (0);
	return (helperpalin(s + 1, len - 2));
}
/**
 * is_palindrome - checks for if string is a palindrome
 *
 * @s: string to be tested
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (*s == '\0')
		return (1);
	return (helperpalin(s, len - 1));
}
