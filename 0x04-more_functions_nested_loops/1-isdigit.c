#include "main.h"

/**
 * _isdigit - checks for digit
 *
 * @c: any digit
 * Return: int
 */

/* _isdigit checks */
int _isdigit(int c)
{
	if ((c >= 48) & (c <= 57))
		return (1);
	else
		return (0);
}
