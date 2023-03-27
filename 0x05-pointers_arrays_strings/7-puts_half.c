#include "main.h"
/**
  * puts_half - prints half of the array
  * @str: entry point of function
  * Return: void function
  */
void puts_half(char *str)
{
	int a;

	int z = (strlen(str) - 1) / 2;
	for (a = z; a <= ((int)strlen(str)); a++)
	{
		printf("%c", str[a]);
	}
}
