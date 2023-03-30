#include "main.h"
/**
  * _strncpy - copies string
  * @dest: destination
  * @src: source string
  * @n: number
  * Return: Returns a char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
