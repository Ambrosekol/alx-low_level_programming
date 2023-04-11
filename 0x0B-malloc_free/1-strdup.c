#include "main.h"
/**
  * _strdup - function that returns a pointer to a newly allocated space in memory,
  * @str: string
  * Return: char
  */
char *_strdup(char *str)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * (int) strlen(str));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (int) strlen(str); i++)
	{
		p[i] = str[i];
	}
	return (p);
}
