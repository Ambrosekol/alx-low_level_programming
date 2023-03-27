#include "main.h"
/**
  * _strcpy - writes a string that copies the string
  * @dest: destination
  * @src: source
  * Return: Char type
  */
char *_strcpy(char *dest, char *src)
{
	char midary[1000];

	strcpy(midary, src);
	dest = midary;
	return dest;
}
