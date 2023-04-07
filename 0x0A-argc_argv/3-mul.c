#include "main.h"
/**
  * main - starting point of program
  * @argc: input count
  * @argv: array of srings
  * Return: success (0)
  */
int main(int argc, char *argv[])
{
	int a;
	int res = 1;
	char *a = argv;

	if (argc > 2)
	{
		for (a = 1; a < argc; a++)
		{
			res *= atoi(argv[a]);
		}
	}
	else
	{
		return (-1);
	}
	printf("%d\n", res);
	return (0);
}
