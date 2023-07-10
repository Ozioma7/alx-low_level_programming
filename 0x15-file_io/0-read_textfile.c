#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 * @filename:The file
 * @letters: letter
 * Return: actual no of letter read and printed or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *Read;
	ssize_t Rd, R, P;

	Rd = open(filename, O_RDONLY);

	if (Rd == -1)
		return (0);
	Read = malloc(sizeof(char) * letters);
	R = read(Rd, Read, letters);
	P = write(STDOUT_FILENO, Read, R);
	free(Readclo);
	close(Rd);
	return (P);
}
