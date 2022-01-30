#ifndef C_PRIMER_PLUS_POINTER_H
#define C_PRIMER_PLUS_POINTER_H

#include "stdlib_import.h"

typedef struct {
    char *name;
    int age;
} person;

typedef struct node {
    int val;
    struct node *next;
} node_t;

typedef struct node_extra {
    int val;
    struct node_extra *left;
    struct node_extra *right;
} node_lr;

void pointer();

void birthday(person *p);

void age_increment();

void dynamic_alloc();

void pascal_triangle(int n);

void show_linked_list();

void show_binary_trees();

void pointer_arithmetics();

void function_pointer();

#endif //C_PRIMER_PLUS_POINTER_H
