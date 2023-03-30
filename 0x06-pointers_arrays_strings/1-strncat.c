#include "main.h"
/**
 * _strncat - str cat n
 * @dest: input 1
 * @src: soure string;
 * @n: number of src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	p = strncat(dest, src, n);
	return (p);
}
