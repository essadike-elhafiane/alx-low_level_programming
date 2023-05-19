#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file
 *@filename: filename
 *@text_content: is the NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ff, len = 0;

	if (filename == NULL)
		return (-1);
	ff = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (ff == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		if (write(ff, text_content, len) == -1)
		{
			close(ff);
			return (-1);
		}
	}
	close(ff);
	return (1);
}
