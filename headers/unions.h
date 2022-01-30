//
// Created by leejoker on 2022/1/29.
//

#ifndef C_PRIMER_PLUS_UNIONS_H
#define C_PRIMER_PLUS_UNIONS_H

#include "stdlib_import.h"

union hiddenMessage {
    int ints[6];
    char chars[21];
};

void show_union_values();

#endif //C_PRIMER_PLUS_UNIONS_H
