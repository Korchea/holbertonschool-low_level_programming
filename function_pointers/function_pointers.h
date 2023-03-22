#ifndef __main_h__
#include <stdio.h>
#define __main_h__

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
