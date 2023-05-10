#include "main.h"

/**
 * read_textfile - function to read a file to the POSIX Standard
 * @filename: path of the file
 * @letters: the number of letters to be printed
 *
 * Return: numbers of of letters in a file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_name;
	char *file_buf;
	ssize_t wc;
	ssize_t rc;

	file_name = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);
	file_buf = (char *)malloc(sizeof(char) * letters);
	rc = read(file_name, file_buf, letters);
	wc = write(STDOUT_FILENO, file_buf, rc);
	free(file_buf);
	close(file_name);
	return (wc);
}
