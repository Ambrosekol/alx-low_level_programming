#include "main.h"
/**
  * main - a program that prints the number of arguments.
  * @argc: number of items
  * @argv - array of srtings
  * return: 0;
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
