#include "main.h"
/**
  * _memcpy - copies memory area.
  * @dest: destination to copy to
  * @src: source
  * @n: number of bytes
  * Return: returns a char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s;

	s = memcpy(dest, src, n);
	return (s);
}
