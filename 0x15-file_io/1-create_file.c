#include "main.h"
/**
 * create_file - create file.
 * @filename: pointer to name of filename.
 * @text_content: pointer to string to put into the file.
 * Return: -1 if function fails, else 1.
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, c;

	c = 0;
	if (filename == NULL)
		return (-1);
	while (text_content[c] != '\0')
		c++;
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (a == -1)
		return (-1);
	if (c != 0)
	{
		b = write(a, text_content, c);
		if (b == -1)
			return (-1);
		close(a);
		return (1);
}
else
{
	close(a);
	return (1);
}
