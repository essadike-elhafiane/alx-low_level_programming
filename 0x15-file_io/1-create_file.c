#include "main.h"
/**
 *create_file - unction that creates a file
 *@filename: filename
 *@text_content: is a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, wbytes, ff;

	if (filename == NULL)
		return (-1);
	ff = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ff == -1)
		return (-1);
	while (text_content[len])
		len++;
	if (text_content != NULL)
	{
		wbytes = write(ff, text_content, len);
		if (wbytes == -1)
		{
			close(ff);
			return (-1);
		}
	}

	close(ff);
	return (1);
}
