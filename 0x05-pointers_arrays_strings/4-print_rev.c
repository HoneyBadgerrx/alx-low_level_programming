#include "main.h"
/**
 * print_rev - string in reverse
 *
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i = 0;

	while ((len - i) >= 0)
	{
		printf("%c", s[len - i]);
		++i;
	}
	putchar('\n');
}
