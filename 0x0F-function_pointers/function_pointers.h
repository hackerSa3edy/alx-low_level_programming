#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

int _putchar(char);
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));


#endif /* FUNCTION_POINTERS_H */
