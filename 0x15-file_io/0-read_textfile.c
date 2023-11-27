#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed,
 *         0 if the file can't be opened or read, filename is NULL,
 *         or if write fails to write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);

	buffer[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten == -1 || (size_t)bytesRead != (size_t)bytesWritten)
		return (0);

	return (bytesRead);
}
