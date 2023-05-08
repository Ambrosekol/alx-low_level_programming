#include "main.h"
/**
  * append_text_to_file - Append a file content
  * @filename: name of file
  * @text_content: text to append with
  * Return: returns 1 if successful else -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w_len;
	size_t len;

	len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
		len = strlen(text_content);
	w_len = write(fd, text_content, len);
	if (w_len < 0)
		return (-1);
	close(fd);
	return (1);
}
