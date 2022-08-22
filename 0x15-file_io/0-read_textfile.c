#include "main.h"
/**
 * read_textfile - reads text
 * @filename: name of the file
 * @letters: number of letters to be printed
 * Return: number of letters printed or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *str;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(fd);
		return (0);
	}
	_read = read(fd, str, letters);
	if (_read == -1)
	{
		close(fd);
		free(str);
		return (0);
	}
	_write = write(STDOUT_FILENO, str, _read);
	if (_write == -1 || _write != _read)
	{
		free(str);
		return (0);
	}
	free(str);
	close(fd);
	return (_write);
}
