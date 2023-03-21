#include <stdio.h>

/**
 * main - Starting point of the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ca;

	char sa;

	for (sa = 'a'; sa <= 'z'; sa++)
	{
		putchar(sa);
	}
	for (ca = 'A'; ca <= 'Z'; ca++)
	{
		putchar(ca);
	}

	putchar('\n');

	return (0);
}
