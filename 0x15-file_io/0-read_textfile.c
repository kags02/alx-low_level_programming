#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - display content of file to screen.
 * @filename: pointer to text.
 * @letters: number of characters to print.
 * Return: number of characters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *hello;
	ssize_t a, b, c;

	if (filename == NULL)
	return (0);
	hello = malloc(sizeof(char) * letters);
	if (hello == NULL)
	return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	b = read(a, hello, letters);
	if (b == -1)
		return (0);
	c = write(STDOUT_FILENO, hello, b);
	if (c == -1)
		return (0);
	free(hello);
	close(a);
	return (c);
}
