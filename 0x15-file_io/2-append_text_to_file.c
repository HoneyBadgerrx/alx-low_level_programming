#include "main.h"
/**
 * append_text_to_file - append to file
 * @filename: filename
 * @text_content: content to inseert
 * Return: 1 if success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
