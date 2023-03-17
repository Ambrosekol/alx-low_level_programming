#include <stdio.h>

/**
  * main - Starting point of the code
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ca;

	for (ca = 'z'; ca >= 'a'; ca--)
	{
		putchar(ca);
	}
	putchar('\n');

	return (0);
}
