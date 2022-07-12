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

	while ((len - i) >= 0)
	{
		putchar(s[len - i]);
		++i;
	}
	putchar('\n');
}
