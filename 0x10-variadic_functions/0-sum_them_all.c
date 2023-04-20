#include "variadic_functions.h"
/**
  * sum_them_all - Sum all inputs
  * @n: new int n
  * @...: ellipsis
  * Return: int (sum)
  */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	sum = 0;
	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
