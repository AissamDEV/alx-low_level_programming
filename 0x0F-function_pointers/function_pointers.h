#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

typedef void (*print_function)(char *);
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
