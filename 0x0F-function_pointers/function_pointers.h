#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

typedef void (*print_function)(char *);
void print_name(char *name, print_function f);

#endif /* FUNCTION_POINTERS_H */
