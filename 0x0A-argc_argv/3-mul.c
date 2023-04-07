#include "main.h"
/**
  * main - starting point of program
  * @argc: input count
  * @argv: array of srings
  * Return: success (0)
  */
int main(int argc, char *argv[])
{
	int a, m;
	char *res;
	int p = 1;

	if (argc > 2)
	{
		for (a = 1; a < argc; a++)
		{
			res = argv[a];
			m = atoi(res);
			p *= m; 
		}
	}
	else
	{
		return (-1);
	}
	printf("%d\n", p);
	return (0);
}
