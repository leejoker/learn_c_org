//
// Created by leejoker on 2022/1/5.
//

#include "../headers/pointer.h"

void dynamic_alloc() {
    person *my_person = (person *) malloc(sizeof(person));
    my_person->age = 18;
    my_person->name = "leejoker";

    printf("My name is %s, my age is %d.\n", my_person->name, my_person->age);
    free(my_person);
}

void pascal_triangle(int n) {
    int **pt = (int **) malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        int *line = (int *) malloc((i + 1) * sizeof(int));
        for (int j = 0; j < (i + 1); j++) {
            if (j == 0 || j == i) {
                line[j] = 1;
            } else {
                line[j] = pt[i - 1][j] + pt[i - 1][j - 1];
            }
            if (j == i) {
                printf("%d\n", line[j]);
            } else {
                printf("%d ", line[j]);
            }
        }
        pt[i] = line;
    }
    for (int i = 0; i < n; i++) {
        free(pt[i]);
    }
    free(pt);
}