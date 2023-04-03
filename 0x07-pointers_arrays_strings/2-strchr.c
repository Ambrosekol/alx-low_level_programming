#include "main.h"
/**
  * strchr - finds a character in a strinmg
  * @s: array to find character
  * @c: character to find
  * Return: a char which is a pointer
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	if (c == '\0')
	{
		return s;
	}
	return NULL;
}
