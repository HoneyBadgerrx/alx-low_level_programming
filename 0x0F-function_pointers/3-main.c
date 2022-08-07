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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (
		argv[2] != "+" &&
		argv[2] != "-" &&
		argv[2] != "/" &&
		argv[2] != "%" &&
		argv[2] != "*")
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "/" && argv[3] == "0") || (argv[2] == "%" && argv[3] == "0"))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ans = get_op_func(a, b);
	printf("%d\n", ans);
	return (0);
}
