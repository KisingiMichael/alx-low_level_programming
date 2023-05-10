#include "main.h"

/**
 * append_text_to_file - function to append to a file
 * @filename: file name
 * @text_content: file contents
 *
 * Return: 1 if success or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_write, f_len;

	f_len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (; text_content[f_len];)
			f_len++;
	}
	f_open = open(filename, O_WRONLY | O_APPEND);
	f_write = write(f_open, text_content, f_len);
	if (f_open == -1 || f_write == -1)
		return (-1);
	close(f_open);
	return (1);
}
