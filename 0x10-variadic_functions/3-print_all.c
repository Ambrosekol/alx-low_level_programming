#include "variadic_functions.h"
/**
  * print_all - print all
  * @format: format to be used
  * Return: void
  */
void print_all(const char *n const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);
	while (*format)
	{
		if (*format == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (*format == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*format == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*format == 's')
		{
			s = va_arg(args, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
		}
		++format;
	}
	va_end(args);
	printf("\n");
}
