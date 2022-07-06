#include "main.h"
/**
  * int _islower(int c): check for lower
  *
  * Description: check for lower
  * Return: int
  **/

/*print lowercase*/
int _islower(int c)
{
	if (c <= 128 | c >= 97)
	{
		return (1);
	}
	else
		return (0);
}
