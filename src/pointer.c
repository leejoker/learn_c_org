#include "../headers/pointer.h"


void pointer() {
    int a = 10;
    int *pointer_to_a = &a;
    printf("a is %d\n", a);
    printf("pointer_to_a is %d\n", pointer_to_a);
    printf("pointer_to_a value is %d\n", *pointer_to_a);
}

void birthday(person *person) {
    person->age++;
}

void age_increment() {
    person john;
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.\n", john.name, john.age);
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);
}

void pointer_arithmetics() {
    int intarray[5] = {10, 20, 30, 40, 50};
    //-----------------------^
    int *pointer = &intarray[2];

    // Array of 3 pointers
    int *parray[3];

    // Copy last three addresses of intarray into parray
    // Use parray and pointer
    int i;
    for (i = 0; i < 3; i++) {
        parray[i] = pointer + i;
    }

    // Test code
    for (i = 0; i < 3; i++) {
        if (parray[i] == &pointer[i]) {
            printf("Matched!\n");
        } else {
            printf("Fail\n");
        }
    }
}

void f1(int var) {
    printf("this is f1 and var is: %d\n", var);
}

void f2(int var) {
    printf("this is f2 and var is: %d\n", var);
}

void f3(int var) {
    printf("this is f3 and var is: %d\n", var);
}

void function_pointer() {
    /* define an array full of function pointers
    to the above functions, that take an `int` as
    their only argument */
    void (*fp[])(int) = {f1, f2, f3};

    int c = 0;
    while (c < 3) {
        printf("c is %d\n", c);
        (fp[c])(c);
        ++c;
    }

    printf("\n");
}