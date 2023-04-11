#include "main.h"
/**
  * _strdup - function that returns a pointer to a newly allocated space in memory,
  * @str: string
  * Return: char
  */

char *_strdup(char* str)
{
	char *p;
	int i, len;

	len = strlen(str);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL || len == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			p[i] = str[i];
		}
		p[len] = '\0';
		return (p);
	}
}
