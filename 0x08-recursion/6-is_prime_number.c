#include "main.h"
/**
 * helperprime - helps check if n is prime
 *
 * @n: number to be tested
 * @t: number being used against n
 * Return: 0 if it is non prime and 1 if prime
 */
int helperprime(int n, int t)
{
	if (t + 1 == n)
		return (1);
	if (n % t == 0)
		return (0);
	return (helperprime(n, t + 1));
}
/**
 * is_prime_number - checks of n is a prime number
 *
 * @n: number to be checked
 * Return: if n is a prime number-1 else 0
 */
int is_prime_number(int n)
{
	int t = 2;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (helperprime(n, t));
}
