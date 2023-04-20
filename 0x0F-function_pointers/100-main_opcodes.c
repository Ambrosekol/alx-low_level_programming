#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that prints the opcodes of its own main function.
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: on success, 1 or 2 in case of failure
 */
int main(int argc, char *argv[])
{
	int indx, byts;
	int (*address)(int, char **) = main;
	unsigned char opcod;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (indx = 0; indx <  byts; indx++)
	{
		opcod = *(unsigned char *)address;
		printf("%.2x", opcod);

		if (indx == byts - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
