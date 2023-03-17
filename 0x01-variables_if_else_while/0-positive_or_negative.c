#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
   * Head - starting point of the program
   *
   * description: 'This program checks the variable n'
   * 'If n either 0, > 0, or < 0, it is printed out'
   *
   * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code below */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			if (n < 0)
			{
				printf("%d is negative\n", n);
			}
		}
	}
	return (0);
}
