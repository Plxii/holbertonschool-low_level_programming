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
	int fd, sz = 0, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[sz] != '\0')
		sz++;

	wr = write(fd, text_content, sz);

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);

}
