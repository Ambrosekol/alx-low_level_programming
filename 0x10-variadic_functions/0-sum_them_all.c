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

	int sum = 0;
	var_list = ptr;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += var_arg(ptr, int);
	}
	var_end(ptr);
	return (sum);
}
