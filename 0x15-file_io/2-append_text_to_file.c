#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename:  is the name of the file
 * @text_content: is the NULL terminated string
 * to add at the end of the file
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, l, del;

	if (!filename)
	{
		return (-1);
	}
	del = open(filename, O_WRONLY | O_APPEND);
	if (del == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
		{
			;
		}
		w = write(del, text_content, l);
		if (w == -1)
		{
			return (-1);
		}
	}

	close(del);
	return (1);
}
