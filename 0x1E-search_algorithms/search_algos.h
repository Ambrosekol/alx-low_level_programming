#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);
#endif
