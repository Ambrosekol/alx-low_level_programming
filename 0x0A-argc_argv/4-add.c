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

	if (argc != 1)
	{
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
			if (atoi(*argv[i]) != 0)
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	else
	{
		printf("%d\n", res);
	}
	return (0);
}
