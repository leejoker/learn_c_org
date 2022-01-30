//
// Created by leejoker on 2022/1/10.
//

#include "../headers/recursion.h"

int factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

void show_factorial(int num) {
    int result = factorial(num);
    printf("factorial is %d\n", result);
}