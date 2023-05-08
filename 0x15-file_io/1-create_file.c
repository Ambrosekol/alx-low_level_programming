#include "main.h"
/**
  * create_file - Creates a file
  * @filename: name of the file
  * @text_content: contents of the text
  * Return: returns 1 on success or -1 if otherwise
  */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	size_t file_len;

	file_len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
		file_len = strlen(text_content);
	status = write(fd, text_content, file_len);
	if (status < 0)
		return (-1);
	close(fd);
	return (status);
}
