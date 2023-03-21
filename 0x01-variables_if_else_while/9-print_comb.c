#include <stdio.h>

/**
  * main - Starting point of the code
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ca;

	for (ca = 0; ca < 10; ca++)
	{
		putchar(ca + '0');

		if (ca != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
