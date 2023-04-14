#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - append text to file.
 * @filename: name of file.
 * @text_content: the text to append to file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	char *bd;
	int a, c = 0, d;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (c = 0; text_content[c]; )
			c++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	bd = malloc(sizeof(char) * c);
	if (bd == NULL)
		return (-1);
	c = 0;
	for ( ; text_content[c] != '\0'; c++)
	{
		bd[c] = text_content[c];
	}
	d = write(a, bd, c);
	if (d == -1)
	return (-1);
	close(a);
	free(bd);
	return (1);
}
