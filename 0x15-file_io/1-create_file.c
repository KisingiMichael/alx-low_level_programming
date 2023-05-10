#include "main.h"

/**
 * create_file - function to create file
 * @filename: name of the file path
 * @text_content: content of file
 *
 * Return: 1 if success or -1 if not succes
 */
int create_file(const char *filename, char *text_content)
{
	int myFile, file_write, file_len;

	file_len = 0;
	if (!filename)
		return (-1);
	if (text_content)
	{
		for (; text_content[file_len];)
			file_len++;
	}
	myFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_write = write(myFile, text_content, file_len);
	if (myFile == -1 || file_write == -1)
		return (-1);
	close(myFile);
	return (1);
}
