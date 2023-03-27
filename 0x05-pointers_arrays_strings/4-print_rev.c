#include "main.h"
/**
  * print_rev - this prints a string in reverse
  * @s: parameter that initiates the functions
  * Return: void (no return value)
  */
void print_rev(char *s)
{
	int a;
	char revstr[];
	int b = 0;

	for (a = (strlen(s) - 1); a >= 0; a--)
	{
		revstr[b] = s[a];
		b++;
	}
}
