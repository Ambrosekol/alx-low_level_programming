#include "main.h"
/**
  * main - start of program
  * @argc: argument count
  * @argv: argument array
  * Return: exit status (0)
  */
int main(int argc, char *argv[])
{
	int i;
	int coins[5] = {25, 10, 5, 2, 1};
	int total = 0;
	int rem = 0;
	int realv;

	realv = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (realv <= 0)
		{
			printf("%d\n", total);
			return (0);
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				total += realv / coins[i];
				rem = realv % coins[i];
				realv = rem;
			}
			printf("%d\n", total);
		}
	}
	return (0);
}
