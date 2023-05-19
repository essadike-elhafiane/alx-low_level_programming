#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: fikename
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b = NULL;
	ssize_t rbytes = 0, wbytes = 0;
	int ff = -1;

	if (filename == NULL)
		return (0);
	ff = open(filename, O_RDONLY);
	if (ff == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		free(b);
		close(ff);
		return (0);
	}
	rbytes = read(ff, b, letters);
	if (rbytes == -1)
	{
		free(b);
		close(ff);
		return (0);
	}
	wbytes = write(STDOUT_FILENO, b, rbytes);
	if (wbytes == -1)
	{
		free(b);
		close(ff);
		return (0);
	}
	free(b);
	close(ff);
	return (wbytes);
}
