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
	int i = 0;

	char *end = dest;

	while (*end != '\0')
	{
		end++:
	}
	while (i < n && src[i] != '\0')
	{
		end[i] = src[i];
		i++;
		i++;
	}
	end[i] = '\0';
	return (dest);
}
