#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: pointer to name
 * @*f: pointer to function
 * Return: viid
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
