#include "main.h"
#include <stdio.h>

/**
* main - copies information from f_f to f_t.
* @ac: number of arguments
* @av: array of arguments
* Return: Always 0.
*/

int main(int ac, char **av)
{
	int f_f, f_t;
	ssize_t  l_read = 1024, l_write, close_file;
	char content[1024];

	if (ac != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp f_f f_t\n");
		exit(97); }
	f_f = open(av[1], O_RDONLY);
	if (f_f == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98); }
	f_t = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_t == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (l_read == 1024)
	{
		l_read = read(f_f, content, 1024);
		if (l_read == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		l_write = write(f_t, content, l_read);
		if (l_write == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	close_file = close(f_f);
	if (close_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", f_f);
		exit(100); }
	close_file = close(f_t);
	if (close_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", f_t);
		exit(100); }
return (0);
}
