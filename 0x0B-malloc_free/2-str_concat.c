#include "main.h"
/**
  * str_concat -  function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * Return: char
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, temp1, temp2, varhold;
	char *k, *newptr1, *newptr2;

	newptr1 = s1;
	newptr2 = s2;
	i = 0;
	if (s1 == NULL)
		newptr1 = "";
	
	if (s2 == NULL)
		newptr2 = "";

	temp1 = strlen(newptr1); /* 0*/
	temp2 = strlen(newptr2); /* 5*/
	varhold = temp1 + temp2; /* 5 */
	k = malloc((sizeof(char) * temp1) + (sizeof(char) * temp2) + 1);
	if (k == NULL)
	{
		return (NULL);
	}
	while (i < temp1)
	{
		k[i] = newptr1[i];
		varhold--;
		i++;
	}
	for (j = 0; j < varhold; j++)
	{
		k[j + temp1] = newptr2[j];
	}
	return (k);
}

