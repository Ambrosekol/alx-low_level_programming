#include "main.h"
/**
  * main - copy from one file to another
  * @argc: arg count
  * @filenames: filename to copy
  * Return: 0 for success
  */
int main(int argc, char **filenames)
{
	int cp_fd, des_fd;
	ssize_t cp_status, des_status;
	int cp_cstatus, des_cstatus;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_fd = open(filenames[1], O_RDONLY);
	if (cp_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filenames[1]);
		exit(98);
	}
	cp_status = read(cp_fd, buffer, 1024);
	if (cp_status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filenames[1]);
		exit(98);
	}
	des_fd = open(filenames[2], O_WRONLY | O_TRUNC | O_CREAT,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	des_status = write(des_fd, buffer, cp_status);
	if (des_fd < 0 || des_status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filenames[2]);
		exit(99);
	}
	des_cstatus = close(des_fd);
	cp_cstatus = close(cp_fd);
	if (cp_cstatus < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int) cp_fd);
		exit(100);
	}
	if (des_cstatus < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int) des_fd);
		exit(100);
	}
	return (0);
}
