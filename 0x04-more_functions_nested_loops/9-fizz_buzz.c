#include <stdio.h>

/**
 * main - fizzbuzz
 *
 * Description: Fizzbuzz
 * Return: nil
 */
void main(void)
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
		putchar(' ');
		++a;
	}
	putchar('\n');

}
