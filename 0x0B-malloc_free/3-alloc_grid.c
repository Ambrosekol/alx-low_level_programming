#include "main.h"
/**
  * alloc_grid - function that returns a pointer to a 2D array
  * @width: Width
  * @height: Height
  * Return: int
  */
int **alloc_grid(int width, int height) /* 6 and 4 */
{
    int a, b;
    int **value;

    if (width <= 0 || height <= 0)
	    return (NULL);

    value = malloc(sizeof(int *) * height);
    if (value == NULL)
	    return (NULL);

    for (a = 0; a < height; a++)
    {
	    value[a] = malloc(sizeof(int) * width);
	    if (value[a] == NULL)
	    {
		    for (b = 0; b < a; b++)
			    free(value[b]);
		    free(value);
		    return (NULL);
	    }
	    for (b = 0; b < width; b++)
	    {
		    value[a][b] = 0;
	    }
    }
    return (value);
}
