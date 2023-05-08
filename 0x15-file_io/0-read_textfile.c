#include "main.h"
/**
  * read_textfile - Read a text file and prints to stdout
  * @filename: pointer to name of file
  * @letters: amount of letters to print out
  * Return: return amount of letters printed in ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t descriptor, amtread, amtwrote;
	char *buffer;

	if (filename == NULL)
		return (0);
	descriptor = open(filename, O_RDONLY);
	if (descriptor < 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	amtread = read(descriptor, buffer, letters);
	amtwrote = write(STDOUT_FILENO, buffer, amtread);
	if (amtwrote < 0)
		return (0);
	close(descriptor);
	free(buffer);
	return (amtwrote);
}
