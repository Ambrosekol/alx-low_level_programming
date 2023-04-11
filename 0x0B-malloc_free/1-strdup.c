#include "main.h"
/**
  * _strdup - function that returns a pointer to a newly allocated space in memory,
  * @str: string
  * Return: char
  */

char *_strdup(char *str)
{
	char *p;
	int i, len;

	len = strlen(str) + 1;
	p = malloc(sizeof(char) * len);
	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (len - 1); i++)
		{
			p[i] = str[i];
		}
		p[len - 1] = '\0';
		return (p);
	}
}
