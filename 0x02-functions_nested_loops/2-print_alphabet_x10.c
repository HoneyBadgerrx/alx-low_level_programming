#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet 10x
  *
  * Description: prints alphabets 10x
  *
  * Return: nothing
  *
  */
/* prints alphabet 10 times*/
void print_alphabet_x10(void)
{
	for (int i = 0, i < 10, i++)
	{
	int x = 'a';
	int y = 'z';

	while (x <= y)
	{
		_putchar(x);
		++x;
	}
	_putchar('\n');
	}
}
