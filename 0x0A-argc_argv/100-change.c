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
	int num, counter, c = 0;
	int change[] = {25, 10, 5, 2, 1};

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
		while (num >= change[c])
		{
			num -= change[c];
			counter++;
		}
		++c;
	}
	printf("%d\n", counter);
	return (0);
}
