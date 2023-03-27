#include "main.h"
/**
  * puts2 - prints character by skipping one
  * @str: point of input entry
  * Return: void
  */
void puts2(char *str)
{
	int a;

	for (a = 0; a < strlen(str); a + 2)
	{
		puts(str[a]);
	}
	puts('\n');
}
