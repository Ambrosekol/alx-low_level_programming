#include "main.h"
/**
  * _strcat - concatenates two strings.
  * @dest: input value
  * @src: input value
  *
  * Return: char
  */
char *_strcat(char *dest, char *src)
{
	char *p;

	p = strcat(dest, src);
	return (p);
}

