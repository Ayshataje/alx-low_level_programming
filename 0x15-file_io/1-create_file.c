#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, c, w;

	c = 0;
	w = 0;
	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[c] != '\0')
		{
			c++;
		}
		w = write(f, text_content, c);
	}
	close(f);
	if (w < 0)
		return (-1);
	return (1);
}
