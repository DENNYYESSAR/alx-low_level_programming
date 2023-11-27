#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    int written, length;

    if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
			continue;

		written = write(fd, text_content, length);
		if (written == -1 || written != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
