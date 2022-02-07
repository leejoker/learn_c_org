//
// Created by leejoker on 2022/2/7.
//

#include "../headers/bitmasks.h"

void show_bitmasks() {
    short FLAG_ON = 1 << 0;
    short FLAG_MOVEMENT = 1 << 1;
    short FLAG_TRANSPARENT = 1 << 2;
    short FLAG_ALIVE = 1 << 3;
    short FLAG_BROKEN = 1 << 4;
    short FLAG_EDIBLE = 1 << 5;

    short attributes = 0;

    /* Set the attributes ON, TRANSPARENT, and BROKEN */

    attributes |= FLAG_ON;
    attributes |= FLAG_TRANSPARENT;
    attributes |= FLAG_BROKEN;

    assert(attributes == (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN));

    /* Modify (set/clear/toggle) so the only attributes are ON and ALIVE */

    attributes &= ~FLAG_TRANSPARENT;

    attributes ^= FLAG_BROKEN;

    attributes |= FLAG_ALIVE;

    assert(attributes == (FLAG_ON | FLAG_ALIVE));

    /* Check if the ALIVE flag is set */
    assert(attributes & FLAG_ALIVE);

    /* Check if the BROKEN flag is not set */
    assert(!(attributes & FLAG_BROKEN));

    /* Modify so only the EDIBLE attribute is set */
    attributes = FLAG_EDIBLE;

    assert(attributes == FLAG_EDIBLE);

    printf("Done!");
}