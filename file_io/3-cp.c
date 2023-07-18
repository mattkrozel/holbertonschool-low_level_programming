#include "main.h"

/**
 * main - function to copy files
 * @argc: input
 * @argv: input
 * Return: 1 or exit
 */

int main(int argc, char *argv[])
{
	char buff[1024];
	int byread = 0, endof_f = 1, fromf = -1, tof = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fromf = open(argv[1], O_RDONLY);
	if (fromf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	tof = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (tof < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		sclose(fromf);
		exit(99);
	}
	while (endof_f)
	{
		endof_f = read(fromf, buff, 1024);
		if (endof_f < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			sclose(fromf);
			sclose(tof);
			exit(98);
		}
		else if (endof_f == 0)
			break;
		byread += endof_f;
		error = write(tof, buff, endof_f);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			sclose(fromf);
			sclose(tof);
			exit(99);
		}
	}
	error = sclose(tof);
	if (error < 0)
	{
		sclose(fromf);
		exit(100);
	}
	error = sclose(fromf);
	if (error < 0)
		exit(100);
	return (0);
}


/**
 * sclose - function that closes a file and prints error
 * @description: error for closed file
 * Return: 1 on succes and -1 on fail
 */
int sclose(int description)
{
	int error;

	error = close(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (error);
}
