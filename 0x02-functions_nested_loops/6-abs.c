#include "main.h"
/**
  * _abs - print abs value
  *
  * Description: print abs value
  * @c: any numeral
  * Return: int
  **/

/*print abs*/
int _abs(int c)
{
	if (c < 0)
		c = c * -1;
	else
		c = c;
	return (c);
}
