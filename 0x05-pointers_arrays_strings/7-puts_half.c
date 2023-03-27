#include "main.h"
/**
  * puts_half - prints half of the array
  * @str: entry point of function
  * Return: void function
  */
void puts_half(char *str)
{
	int a;
	int length = strlen(str);
	int start_index = (length - 1) / 2;

	for (a = start_index; a < length; a++)
	{
		printf("%c", str[a]);
	}
	printf("\n");
}
