#ifndef SEARCH_ALGORITHMS_H
#define SEARCH_ALGORITHMS_H

/*Headers*/
#include <stdio.h>
#include <math.h>
#include <stddef.h>

/*Function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int find_value(int *array, int low, int high, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int interpolate_value(int *array, int low, int high, int value);
int exponential_search(int *array, size_t size, int value);

/*Helper functions*/
void print_subarray(int *array, int low, int high);

#endif /*SEARCH_ALGORITHMS_H*/
