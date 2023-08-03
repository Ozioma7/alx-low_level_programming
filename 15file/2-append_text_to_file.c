#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The file
 * @text_content: Content to be appended
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int Op, Wr, Spc = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (Spc = 0; text_content[Spc];)
			Spc++;
	}

	Op = open(filename, O_WRONLY | O_APPEND);
	Wr = write(Op, text_content, Spc);

	if (Op == -1 || Wr == -1)
		return (-1);

	close(Op);
	return (1);
}
