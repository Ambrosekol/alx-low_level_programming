#include "main.h"
/**
  * puts2 - prints character by skipping one
  * @str: point of input entry
  * Return: void
  */
void puts2(char *str)
{
	int a;

	for (a = 0; a < ((int) strlen(str)); a = a + 2)
	{
		printf("%c", str[a]);
	}
	printf("\n");
}
