#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - begining of project
 * @argc: argument count
 * @argv: arg vector
 * Return: intiger
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	int num1, num2;
	char *optor;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	optor = argv[2];
	if (get_op_func(optor) == NULL || optor[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*optor == '%' && num2 == 0) || (*optor == '/' && num2 == 0))
	{
		printf("rError\n");
		exit(100);
	}
	printf("%d\n", get_op_func(optor)(num1, num2));
	return (0);
}
