#include "holberton.h"
/**
 * read_textfile - prints it to the POSIX standard output.
 * @filename: file name.
 * @letters: number of characters.
 * Return: characters prints.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _open, _read, _write;
	char *ptr;

	if (filename == NULL)
	{
		return (0);
	}

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		return (0);
	}
	_open = open(filename, O_RDONLY);
	if (_open == -1)
	{
		free(ptr);
		return (0);
	}
	_read = read(_open, ptr, letters);
	if (_read == -1)
	{
		free(ptr);
		return (0);
	}
	_write = write(STDOUT_FILENO, ptr, _read);
	if (_write != _read)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	close(_open);

	return (_write);
}
