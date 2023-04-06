#include "main.h"
/**
  * main - starting point
  * @argc: input count
  * @argv: list of items
  * Return: exit (0);
  */
int main(int argc, char *argv[])
{
	int i;
	int res = 0;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				res += atoi(argv[i]);
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