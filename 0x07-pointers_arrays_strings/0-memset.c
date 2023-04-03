#inclde "main.h"
/**
  * _memset - fills memory with a constant byte.
  * @s: array to fill in
  * @b: char to fill in to
  * @n: number of slot in array to fill
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
