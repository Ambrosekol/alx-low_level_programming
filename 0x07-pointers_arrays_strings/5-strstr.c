#include "main.h"
/**
  * _strstr - a function that locates a substring.
  * @haystack: array to query
  * @needle: sequence to find
  * Return: char
  */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}
