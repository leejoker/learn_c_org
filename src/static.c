#include "../headers/static.h"

int sum(int number) {
    static int sum = 0;
    sum += number;
    return sum;
}

void static_test() {
    int a = 0;
    a = sum(100);
    a = sum(200);
    a = sum(300);
    printf("%d\n", a);
}