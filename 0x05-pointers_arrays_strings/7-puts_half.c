#include "main.h"
/**
  * puts_half - prints half of the array
  * @str: entry point of function
  * Return: void function
  */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index = length / 2;

	for (int i = start_index; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
