#include "main.h"
/**
  * rev_string - reverses a string
  * @s: input point for function
  * Return: void
  */
void rev_string(char *s)
{
	int a, c;
	char revstr[9000];
	int b = 0;

	for (a = (strlen(s) - 1); a >= 0; a--)
	{
		revstr[b] = s[a];
		b++;
	}
	for (c = 0; c <= strlen(revstr); c++)
	{
		*s[c] = revstr[c];
	}
}
