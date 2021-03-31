#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Pointer
 * @text_content: Content.
 * Return: 1 always.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int _open, _write, count;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
		{}
	}

	_open = open(filename, O_WRONLY | O_APPEND);
	if (_open == -1)
	{
		return (-1);
	}
	_write = write(_open, text_content, count);
	if (_write == -1)
	{
		return (-1);
	}
	close(_open);
	return (1);
}
