#include "main.h"

/**
 * Appends text at the end of a file.
 * @filename is a ponter to the name of the file.
 * @text_content is the string to add to the end of the file.
 *
 * The user lacks write permissions --1 if the file does not exist.
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	w = write(i, text_content, len);

	if (i == -1 || w== -1)
		return (-1);

	close(i);

	return (1);
}
