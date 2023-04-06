#include "main.h"
/**
  * main - main point of program
  * @argc: argument count
  * @argv: argument vector of strings
  * Return: success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
