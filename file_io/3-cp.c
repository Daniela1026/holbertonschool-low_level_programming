#include "main.h"
#include <stdlib.h>

/**
*  standard_error - if the number of argument is not the
*  correct one, exit with code 97 98 99 100
* @number: Character int
* @line: Character char
* @file: Character int
* Return: Always arg
*/
int standard_error(int number, char *line, int file)
{
	int arg = 0;

	switch (number)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			arg = 97;
			break;

		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", line);
			arg = 98;
			break;

		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", line);
			arg = 99;
			break;

		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
			arg = 100;
			break;
	}
	return (arg);
}

/**
* main - Write a program that copies the content
* of a file to another file
* @argc: Character int
* @argv: Character char
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i, n, reads, writes;
	int fd1, fd2 = 0;
	char buffer[1024];

	if (argc != 3)
		exit(standard_error(97, NULL, 0));
	
	fd2 = open(argv[1], O_RDONLY);
	if (fd2 == -1)
		exit(standard_error(98, argv[1], fd2));

	fd1 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (fd1 == -1)
		exit(standard_error(99, argv[2], fd1));

	reads = read(fd2, buffer, 1024);
	if (reads == -1)
		exit(standard_error(98, argv[1], fd2));
	
	while (reads != 0)
	{
		writes = write(fd1, buffer, reads);
		if (writes == -1)
			exit(standard_error(99, argv[2], fd2));
		reads = read(fd2, buffer, 1024);
	}
	
	i = close(fd2);
	if (i == -1)
		exit(standard_error(100, argv[1], fd2));
	n = close(fd1);
        if (n == -1)
                exit(standard_error(100, argv[2], fd1));

	return (0);
}
