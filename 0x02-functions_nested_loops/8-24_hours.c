#include "main.h"
/**
  * jack_bauer() - prins time
  *
  * Description: print min in  aday
  * Return: 0
  **/

/*print time*/
void jack_bauer(void)
{
	int h = 0;
	int h1 = 0;
	int min = 0;
	int min1 = 0;

	while (h1 < 3)
	{
		while (h < 4)
		{
			while (min1 < 6)
			{
				while (min < 10)
				{
					_putchar(h1);
					_putchar(h);
					_putchar(':');
					_putchar(min1);
					_putchar(min);
					_putchar('\n');
					++min;
				}
				++min1;
			}
			++h;
		}
		++h1;
	}
}
