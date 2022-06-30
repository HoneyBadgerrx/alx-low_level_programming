#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - entry point
 * function_name - no_print
 *
 * Description: Prints without printf/puts
 * section header: main
 * Return: 1
 */
int main(void)
{
	const char msg[] =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	syscall(SYS_write, 1, msg, sizeof(msg));
	return (1);
}
