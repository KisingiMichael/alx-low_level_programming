#include "main.h"

/**
 * create_buff - create a buffer of MAX_SIZE bytes
 * @file_buff: file buffer
 *
 * Return: buffer created
 */
char *create_buff(char *file_buff)
{
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * MAX_SIZE);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_buff);
		exit(99);
	}
	return (buffer);
}


/**
 * f_close - function to close a file when file descriptor cant closed
 * @file_d: file descriptor to be closed
 */
void f_close(int file_d)
{
	int c;

	c = close(file_d);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
}


/**
 * main - my main function to execute
 * @argc: number of arguments
 * @argv: argument lists
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int from, to, file_read, file_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	file_read = read(from, buffer, MAX_SIZE);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (file_read > 0)
	{
		if (from == -1 || file_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		file_write = write(to, buffer, file_read);
		if (to == -1 || file_write == 1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		file_read = read(from, buffer, MAX_SIZE);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close(from);
	close(to);
	return (0);
}
