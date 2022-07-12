#include "main.h"
/**
 * puts_half - prints half o f string
 *
 * @str: any string
 * Return: 0
 */
void puts_half(char *str)
{
	len = strlen(str);
	int i = 0;
	int n = (len - 1)/2;

	while (i <= n)
	{
		putchar(str[i]);
		++i;
	}
	putchar('\n');
}

