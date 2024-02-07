#ifndef SEARCH_H
#define SEARCH_H

/*Headers*/
#include <stdio.h>
#include <math.h>

/*Function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int find_value(int *array, int low, int high, int value);
int jump_search(int *array, size_t size, int value);

#endif /*SEARCH_H*/
