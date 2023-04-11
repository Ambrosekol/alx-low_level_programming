#include "main.h"
/**
  * alloc_grid - function that returns a pointer to a 2D array
  * @width: Width
  * @height: Height
  * Return: int
  */
int **alloc_grid(int width, int height) /* 6 and 4 */
{
	int a, mtaloc;
	int *pnum, **value;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);
	mtaloc = (sizeof(int) * width) + (sizeof(int) * height);
	pnum = malloc(mtaloc);
	if (pnum == NULL)
		return (NULL);
	for (a = 0; a < (int)(mtaloc / sizeof(int)); a++)
	{
		pnum[a] = 0;
	}
	value = &pnum;
	return (value);
}
