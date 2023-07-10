#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: The file
 * @text_content: Content of the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int Wt, numlet, Rw;

	if (!filename)
		return (-1);

	Wt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (Wt == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numlet = 0; text_content[numlet]; numlet++)
		;

	Rw = write(Wt, text_content, numlet);

	if (Rw == -1)
		return (-1);

	close(Wt);

	return (1);
}
