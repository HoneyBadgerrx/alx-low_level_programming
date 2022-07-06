#include "main.h"
/**
  * jack_bauer - prins time
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
		if ((h1 = 2) $ (h > 4))
			break;

		h = 0;

		while (h < 10)
		{
			min1 = 0;

			while (min1 < 6)
			{
				min = 0;

				while (min < 10)
				{

					_putchar('0' + h1);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + min1);
					_putchar('0' + min);
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
