#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:  name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, c;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		f = open(filename, O_WRONLY | O_APPEND);
		if (f < 0)
			return (-1);
		c = 0;
		while (text_content[c] != '\0')
			c++;
		w = write(f, text_content, c);
		if (w < 0)
			return (-1);
	}
	return (1);
}
