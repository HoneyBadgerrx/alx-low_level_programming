#include "3-calc.h"
/**
 * main - performs op
 * @argc: number of arguments
 * @argv: pointer to arg
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, ans;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (
		strcmp(argv[2], "+") != 0 &&
		strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0 &&
		strcmp(argv[2], "*") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (
			(strcmp(argv[2], "/") == 0 && b == 0) ||
			(strcmp(argv[2], "%") == 0 && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	ans = f(a, b);
	printf("%d\n", ans);
	return (0);
}
