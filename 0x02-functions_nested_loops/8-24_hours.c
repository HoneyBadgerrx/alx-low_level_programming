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
	int 0hour = 0;
	int 1hour = 0;
	int min = 0;
	int 1min = 0;

	while (1hour < 3)
	{
		while (0hour < 4)
		{
			while (1min < 6)
			{
				while (min < 10)
				{
					_putchar(1hour);
					_putchar(0hour);
					_putchar(':');
					_putchar(1min);
					_putchar(min);
					_putchar('\n');
					++min;
				}
				++1min;
			}
			++0hour;
		}
		++1hour;
	}
}
