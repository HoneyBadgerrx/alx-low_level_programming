#include "main.h"

/**
  * print_alphabet - prints alphabet
  *
  * Description: prints alphabets
  *
  * Return: nothing
  *
  */
/* prints alphabet*/
void print_alphabet(void)
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
