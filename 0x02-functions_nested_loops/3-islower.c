#include "main.h"
/**
  * _islower - check for lower
  *
  * Description: check for lower
  * @c: any character
  * Return: int
  **/

/*print lowercase*/
int _islower(int c)
{
	if ((c <= 122) & (c >= 97))
	{
		return (1);
	}
	else
		return (0);
}
