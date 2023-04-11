#include "main.h"
/**
  * strtow - A function that splits a string into words.
  * @str: string to split
  * Return: char
  */
char **strtow(char *str)
{
	int i, j, k, len, count;
	char **words;
	int word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);
	count = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	words = (char **)malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_len = 0;
			for (j = i; j < len && str[j] != ' '; j++)
				word_len++;

			words[k] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (words[k] == NULL)
			{
				for (i = 0; i < k; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			strncpy(words[k], str + i, word_len);
			words[k][word_len] = '\0';
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}
