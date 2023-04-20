#include "variadic_functions.h"
/**
  * print_numbers - print numbers
  * @separator: separator
  * @n: count
  * @...: ellipsis
  * Return: Void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i, k;

	va_start(ptr, n);
	for (i = 0; i < (int) n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && i != (int) (n-1))
		{
			for (k = 0; k < (int) strlen(separator); k++)
			{
				printf("%c", separator[k]);
			}
		}
	}
	va_end(ptr);
	printf("\n");
}
