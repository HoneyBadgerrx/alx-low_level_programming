#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive integers
 *
 * @argc: number of arguments
 * @argv: commandline arguments
 * Return: 0 if successfyl
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			++j;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
