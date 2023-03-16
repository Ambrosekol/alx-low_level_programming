#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int e = sizeof(float);

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("size of a long int: %d byte(s)\n", c);
	printf("size of a long long int: %d byte(s)\n", d);
	printf("size of a float: %d byte(s)\n", e);
	return (0);
}
