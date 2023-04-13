#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input one
 * @s2: input two
 * @n: numbers
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int temp, i;
	char *p1;
	char *p2, *newptr;

	p1 = s1;
	p2 = s2;
	temp = strlen(s1) - 1;
	if (s2 == NULL)
		p1 = "";
	if (s1 == NULL)
		p2 = "";
	newptr = realloc(p1, sizeof(char) * (n + 1));
	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			newptr[temp + 1] = '\0';
		}
		else
		{
			newptr[temp + 1] = p2[i];
		}
		temp++;
	}
	return (newptr);
}
