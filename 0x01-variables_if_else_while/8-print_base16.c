#include <stdio.h>

/**
  * main - Starting point of the code
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ca;

	for (ca = 0; ca < 16; ca++)
	{
		if (ca < 10)
		{
			putchar(ca + '0');
		}
		else
		{
			putchar(ca - 10 + 'a');
		}
	}

	putchar('\n');

	return (0);
}
