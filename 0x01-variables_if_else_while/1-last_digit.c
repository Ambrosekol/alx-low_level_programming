#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point of the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lstnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstnum = n % 10;
	if (lstnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstnum);
	}
	else
	{
		if (lstnum == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lstnum);
		}
		else
		{
			if ((lstnum < 6) != 0)
			{
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstnum);
			}
		}
	}
	return (0);
}
