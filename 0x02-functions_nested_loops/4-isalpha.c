#include "main.h"
/**
  * _isalpha - check for letter
  *
  * Description: check for letter
  * @c: any character
  * Return: int
  **/

/*print lowercase*/
int _isalpha(int c)
{
	if (((c <= 122) & (c >= 97)) | ((c <= 90) & (c >= 65)))
	{
		return (1);
	}
	else
		return (0);
}
