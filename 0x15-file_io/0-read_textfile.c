#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt;
	ssize_t f, wr, rd;

	if (filename == NULL)
		return (0);
	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(txt);
		return (0);
	}
	rd = read(f, txt, letters);
	close(f);
	if (rd < 0)
	{
		free(txt);
		return (0);
	}
	wr = write(STDOUT_FILENO, txt, rd);
	if (wr < 0)
	{
		free(txt);
		return (0);
	}
	return (wr);
}
