#include "main.h"
/**
  * argstostr - a function that concatenates all the arguments
  * @ac: arg count
  * @av: arg vector
  * Return: char
  */
char *argstostr(int ac, char **av)
{
	int i, j, memcount;
	char *memalloc, *holder;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	memcount = 0;
	for (i = 0; i < ac; i++)
	{
		memcount += strlen(av[i]) + 1;
	}
	memalloc = malloc(sizeof(char) * memcount + 1);
	if (memalloc == NULL)
	{
		return (NULL);
	}
	memcount = 0;
	for (i = 0; i < ac; i++)
	{
		holder = av[i];
		for (j = 0; j < (int) strlen(holder); j++)
		{
			memalloc[memcount] = holder[j];
			memcount++;
		}
		memalloc[memcount] = '\n';
		memcount++;
	}
	memalloc[memcount] = '\0';
	return (memalloc);
}
