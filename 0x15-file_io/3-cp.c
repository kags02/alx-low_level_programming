#include <stdio.h>
#include "stdlib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * close_file - close file descriptors.
 * @fd: the file descriptor to close.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * cp - copy content from one file to another.
 * @filename1: file to copy from.
 * @filename2: file to cpy to.
 * Return: void.
 */
void cp(const char *filename1, const char *filename2)
{
	int n, j, k, u;
	char buffer[1024];

	if (filename1 == NULL)
		exit(-1);
	if (filename2 == NULL)
		exit(-1);
	j = open(filename1, O_RDONLY);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", filename1);
		exit(98);
	}
	n = open(filename2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
		exit(99);
	}
	k = read(j, buffer, 1024);
	if (k == -1)
		exit(-1);
	u = write(n, buffer, k);
	if (u == -1)
		exit(-1);
	close_file(n);
	close_file(j);
	exit(1);

}
/**
 * main - receives arguments and test the above function.
 * @b: number of arguments passed.
 * @av: arguments passed.
 * Return: 0.
 */
int main(int b, char **av)
{

	if (b != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}


