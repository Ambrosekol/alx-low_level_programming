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
	int i, k, temp;

	va_start(ptr, n);
	for (i = 0; i < (int) n; i++)
	{
		temp = va_arg(ptr, int);
		printf("%d", temp);
		if (separator != NULL)
		{
			for (k = 0; k < sizeof(separator); k++)
			{
				printf("%c", separator[k]);
			}
		}
	}
	printf("\n");
}
