#include "main.h"
/**
  * _atoi - converts string to int
  * @s: input
  * Return: Returns int
  */
int _atoi(char *s)
{
	int sign = 1, num = 0;
	 while (*s != '\0')
	 {
		 if (*s == '-')
		 {
			 sign = -1;
		 }
		 else if (*s >= '0' && *s <= '9')
		 {
			 num = num * 10 + (*s - '0');
		 }
		 else if (*s == '+')
		 {
			 break;
		 }
		 s++;
	 }
	 return (sign * num);
}
