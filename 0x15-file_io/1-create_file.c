#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content:content to place in file
 * Return: 1 on sucess, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		i = write(fd, text_content, strlen(text_content));
	if (i == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
