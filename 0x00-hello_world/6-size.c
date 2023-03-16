#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %i byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %i byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %i byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
