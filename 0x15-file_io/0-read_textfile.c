#include "main.h"
/**
  * read_textfile - Read a text file and prints to stdout
  * @filename: pointer to name of file
  * @letters amount of letters to print out
  * Return: return amount of letters printed in ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	return (write(STDOUT_FILENO, filename, letters));
}
