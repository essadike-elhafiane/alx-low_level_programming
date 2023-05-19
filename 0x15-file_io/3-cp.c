#include "main.h"
/**
 *main - program that copies the content of a file to another file
 *@argc: arg1
 *@argv: arg2
 *Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, rbytes, wbytes;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	while ((rbytes = read(f_from, buffer, 1024)) > 0)
	{
		wbytes = write(f_to, buffer, rbytes);
		if (wbytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (rbytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	if (close(f_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	if (close(f_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);
	return (0);
}
