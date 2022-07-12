#include "main.h"
/**
 * puts_half - prints half o f string
 *
 * @str: any string
 * Return: 0
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len + 1) / 2;

	while (n <= (len - 1))
	{
		putchar(str[n]);
		++n;
	}
	putchar('\n');
}

