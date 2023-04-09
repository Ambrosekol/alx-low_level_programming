#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  * main - starting point
  * @argc: input count
  * @argv: list of items
  * Return: exit (0);
  */
int main(int argc, char *argv[])
{
	int i, s, j;
	int res = 0;

	if (argc == NULL)
	{
		printf("0");
	}

	for (s = 1; s < argc; s++)
	{
		for (j = 0; j < (int) strlen(argv[s]); j++)
		{
			if (argv[s][j] >= 'a' && argv[s][j] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
