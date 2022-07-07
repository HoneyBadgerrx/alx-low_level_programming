#include <stdio.h>

/**
 * main - fizzbuzz
 *
 * Description: Fizzbuzz
 * Return: 0
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 15) == 0)
			printf("FizzBuzz");
		else if ((a % 5) == 0)
			printf("Buzz");
		else if ((a % 3) == 0)
			printf("Fizz");
		else
			printf("%d", a);
		if (a != 100)
			putchar(' ');
		++a;
	}
	putchar('\n');
	return (0);
}
