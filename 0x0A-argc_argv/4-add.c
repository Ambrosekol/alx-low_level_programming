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
			if (isdigit(*argv[i]))
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
