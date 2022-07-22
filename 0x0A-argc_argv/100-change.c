#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds change
 *
 * @argc: number of arg
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int num, counter;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	counter = 0;
	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	while (num != 0)
	{
		++counter;
		if (num >= 25)
		{
			num -= 25;
			continue;
		}
		if (num >= 10)
		{
			num -= 10;
			continue;
		}
		if (num >= 5)
		{
			num -= 5;
			continue;
		}
		if (num >= 2)
		{
			num -= 2;
			continue;
		}
		if (num >= 1)
		{
			num -= 1;
			continue;
		}
	}
	printf("%d\n", counter);
	return (0);
}
