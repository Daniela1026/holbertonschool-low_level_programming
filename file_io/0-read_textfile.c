#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output
* @filename: Character char
* @letters: Character size_t
* Return: Always 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int lett;
	int file;

	if (filename == NULL || letters == 0)
		return (0);

	lett = open(filename, O_RDONLY);
	if (lett == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	file = read(lett, buff, letters);
	if (file == -1)
		return (0);

	write(STDOUT_FILENO, buff, file);

	close(lett);
	free(buff);

	return (file);
}
