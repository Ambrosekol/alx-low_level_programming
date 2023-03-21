#include <stdio.h>

/**
  * main - Starting point of the code
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ca;

	for (ca = 'a'; ca <= 'z'; ca++)
	{
		if (ca != 'q' && ca != 'e')
		{
			putchar(ca);
		}
	}
	putchar('\n');

	return (0);
}
