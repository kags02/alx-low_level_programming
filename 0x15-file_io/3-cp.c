#include <stdio.h>
#include "stdlib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
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

	j = open(filename1, O_RDONLY);
	if (j == -1)
	{
		dprintf(2, "Can't read from the file %s\n", filename1);
		exit(98);
	}
	n = open(filename2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (n == -1)
	{
		exit(99);
		dprintf(2, "Can't write to %s\n", filename2);
	}
	k = read(j, buffer, 1024);
	if (k == -1)
		exit(-1);
	u = write(n, buffer, k);
	if (u == -1)
		exit(-1);
	close(n);
	close(j);
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
		dprintf(2, "cp %s %s", av[1], av[2]);
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}


