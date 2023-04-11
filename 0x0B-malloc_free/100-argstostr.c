#include "main.h"
/**
  * argstostr - a function that concatenates all the arguments
  * @ac: arg count
  * @av: arg vector
  * Return: char
  */
char *argstostr(int ac, char **av)
{
	int i, j, nlsize, memcount;
	char *memalloc, *holder[];

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	nlsize = ac;
	holder = **av;
	memcount = 0;
	memalloc = malloc(sizeof(holder) + (sizeof(char) * (ac + nlsize)));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int) sizeof(holder[i]); j++)
		{
			memalloc[memcount] = holder[i][j];
			memcount++;
		}
		memalloc[memcount] = '\0';
		memcount++;
		memalloc[memcount] = '\n';
		memcount++;
	}
	return (memalloc);
}
		
