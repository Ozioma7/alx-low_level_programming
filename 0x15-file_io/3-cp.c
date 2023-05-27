#include "main.h"

/**
 * fileError - If the file can open..
 * @home_file: file_from.
 * @destn_file: file_to.
 * @argv: arguments vector.
 *
 * Return: no return.
 */
void fileError(int home_file, int destn_file, char *argv[])
{
	if (home_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Error While Reading %s\n", argv[1]);
		exit(98);
	}
	if (destn_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Error why Writing %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Main Function
 * @argc: Arguments Count
 * @argv: Arguments vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int home_file, destn_file, err_close;
	ssize_t num_chars, n;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp home_file destn_file");
		exit(97);
	}

	home_file = open(argv[1], O_RDONLY);
	destn_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(home_file, destn_file, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(home_file, buf, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		n = write(destn_file, buf, num_chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(home_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", home_file);
		exit(100);
	}

	err_close = close(destn_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", home_file);
		exit(100);
	}
	return (0);
}
