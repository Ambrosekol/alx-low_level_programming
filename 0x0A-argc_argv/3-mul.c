#include "main.h"
/**
  * main - starting point of program
  * @argc: input count
  * @argv: array of srings
  * Return: success (0)
  */
int main(int argc, char __attribute__((unused))*argv[])
{
	int a;
	char res = 1;

	if (argc > 2)
	{
		for (a = 1; a < argc; a++)
		{
			res *= atoi(argv[a]); 
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", p);
	return (0);
}
