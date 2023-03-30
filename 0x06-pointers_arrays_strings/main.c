#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int i = 0;

    reverse_array(a, sizeof(a) / sizeof(int));
    for (i = 0; i < 13; i++)
    {
	    printf("%d", a[i]);
    }
    return (0);
}
