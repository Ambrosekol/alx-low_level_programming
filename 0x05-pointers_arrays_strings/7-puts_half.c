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
	for (a = 0; a <= ((int) strlen(str)); a++)
	{
		printf("%s", str[0 + z]);
	}
}
