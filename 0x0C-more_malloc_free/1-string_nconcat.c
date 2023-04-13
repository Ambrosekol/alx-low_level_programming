#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input one
 * @s2: input two
 * @n: number of characters to concatenate from s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len, s2_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if ((int) n >= s2_len)
		n = s2_len;
	result = malloc(sizeof(char) * (s1_len + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
