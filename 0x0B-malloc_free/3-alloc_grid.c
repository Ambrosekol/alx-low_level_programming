#include "main.h"
/**
  * alloc_grid - function that returns a pointer to a 2D array
  * @width: Width
  * @height: Height
  * Return: int
  */
int **alloc_grid(int width, int height) /* 6 and 4 */
{
	int a;
	int *pnum;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);
	pnum = (int *)malloc((sizeof(int) * width) + (sizeof(int) * height));
	if (pnum == NULL)
		return (NULL);
	for (a = 0; a < (sizeof(pnum) / sizeof(int)); a++)
	{
		*pnum[a] = 0;
	}
	return (pnum);
}
