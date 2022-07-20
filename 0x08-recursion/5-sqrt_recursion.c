#include "main.h"
/**
 *
 *
 *
 */
int helperfunc(int n, int root)
{
	if (root * root == n)
		return(root);
	if (root >= n / 2)
		return (-1);
	helperfunc(n, root + 1);
}

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
