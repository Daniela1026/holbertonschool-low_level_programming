#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_file - Create a function that creates a file
* @filename: Character char
* @text_content: Character char
* Return: Always 0.
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	int str;
	int lett = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);

	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lett])
			lett++;

		str = write(file, text_content, lett);
		if (str < 0)
			return (-1);
	}

	close(file);
	return (1);
}
