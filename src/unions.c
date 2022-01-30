//
// Created by leejoker on 2022/1/29.
//

#include "../headers/unions.h"

/* define the union here */

void show_union_values() {

    // initializer lists like this are assigned to the first member of the union/struct!
    // There are 6 ints here so...
    union hiddenMessage intCharacters = {{1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0}};
    union hiddenMessage initIntegers;

    char chars[] = {'I', ' ', 'u', 'n', 'd', 'e', 'r', 's', 't', 'a', 'n', 'd', ' ', 'U', 'n', 'i', 'o', 'n', 's',
                    '!', 'a'};

    for (int i = 0; i < 20; i++) {
        initIntegers.chars[i] = chars[i];
    }

    /* testing code */
    printf("[");
    // only go to 18 because 1 byte is for the terminating 0 and we don't print the last in the loop
    for (int i = 0; i < 19; ++i) {
        printf("%c, ", intCharacters.chars[i]);
    }
    printf("%c]\n", intCharacters.chars[19]);
    printf("%s\n", intCharacters.chars);

    printf("[");
    for (int i = 0; i < 6; i++) {
        int c = 4 * i;
        if (c != 20) {
            printf("%c %c %c %c\n", initIntegers.chars[c], initIntegers.chars[c + 1], initIntegers.chars[c + 2],
                   initIntegers.chars[c + 3]);
            printf("%d, \n", initIntegers.ints[i]);
        }
    }
    printf("]\n");
}