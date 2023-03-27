#include "main.h"
/**
  * _strcpy - writes a string that copies the string
  * @dest: destination
  * @src: source
  * Return: Char type
  */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
