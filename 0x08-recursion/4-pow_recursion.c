#include "main.h"
/**
 * _pow_recursion - prints power of x to y with recursion
 *
 * @x: integer to be powered
 * @y: amount of power
 * Return: result or error(-1)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
