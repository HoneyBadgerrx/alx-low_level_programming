#include "main.h"
/**
 * puts2 - print every 2nd string char
 *
 * @str: string
 * Return: o
 */
void puts2(char *str)
{
	int len = srlen(str);
	int i = 0;

	while (i <= (len - 1))
	{
		putchar(str[i]);
		i = i + 2;
	}
	putchar('\n');
}
