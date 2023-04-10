#include "main.h"
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: numbers of letters printed.
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int del;
	char *ptr;
	ssize_t r, w;

	if (!filename)
		return (0);

	del = open(filename, O_RDONLY);

	if (del == -1)
	{
		return (0);
	}
	ptr = malloc(sizeof(char) * (letters));
	if (!ptr)
	{
		return (0);
	}

	r = read(del, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);

	close(del);
	free(ptr);

	return (w);
}
