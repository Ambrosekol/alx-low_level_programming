#include "variadic_functions.h"
/**
  * print_all - print all
  * @format: format to be used
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	const char *ptr = format;

	va_start(args, format);
	while (*ptr)
	{
		if (*ptr == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (*ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*ptr == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*ptr == 's')
		{
			s = va_arg(args, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
		}
		++ptr;
	}
	va_end(args);
	printf("\n");
}
