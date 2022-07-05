#include <unistd.h>
/**
  * main - entry point
  * function_name - put_char
  *
  * Description:
  * Return: 0
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar('_');
	return (0);
}
