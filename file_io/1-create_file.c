#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written,
 * write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t index = 0;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[index] != '\0')
	{
		index++;
	}
	file = open(filename, 0_CREAT | 0_RDWR | 0-TRUNC, 0600);
	if (file != -1)
	{
		write(file, text_content, index);
	}
	if (file == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
