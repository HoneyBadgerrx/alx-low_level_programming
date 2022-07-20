#include "main.h"
/**
 * helperfunc - used to check for root
 *
 * @n: number to find sqrt
 * @root: possible rot of n
 * Return: either error or root
 */
int helperfunc(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root >= n / 2)
		return (-1);
	return (helperfunc(n, root + 1));
}
/**
 * _sqrt_recursion - finds sqrt of n using recursion
 *
 * @n: number with unknown sqrt
 * Return: error or sqrt of n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (helperfunc(n, root));
}
