#include "main.h"
/**
  * _realloc - reallocates memory 
  * @ptr: pointer to old mem
  * @old_size: old size in bytes
  * @new_size: new size in bytes
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newp;
	size_t sizeh;

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	newp = malloc(new_size);
	if (newp != NULL)
	{
		sizeh = old_size < new_size ? old_size : new_size;
		memcpy(newp, ptr, sizeh);
		free(ptr);
	}
	return (newp);
}
