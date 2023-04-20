#include "variadic_functions.h"
/**
  * print_strings - Prints Strings
  * @separator: separator for the strings
  * @n: item cnt
  * @...: var list
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int a;
	va_list args;
	char *p;

	va_start(args, n);
	for (a = 0; a < (int) n; a++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (separator != NULL && a < (int) (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
