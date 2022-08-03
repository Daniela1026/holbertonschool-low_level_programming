#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* append_text_to_file - Write a function that appends
* text at the end of a file.
* @filename: Character char
* @text_content: Character char
* Return: Always 1 and -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int writ;
	int lett = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[lett])
		lett++;
	writ = write(file, text_content, lett);

	if (writ < 0)
		return (-1);

	close(file);
	return (1);
}
