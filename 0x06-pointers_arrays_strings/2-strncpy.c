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
	char *p;

	p = strncpy(dest, src, n);
	return (p);
}
