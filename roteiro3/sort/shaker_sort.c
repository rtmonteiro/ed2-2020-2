//
// Created by Pichau on 03/03/2021.
//

#include "item.h"

void sort(Item *a, int lo, int hi) {
    int top = hi - 1;
    int bottom = 0;
    int swapped = 0;
    int i = 0;
    while (swapped == 0 && bottom < top) {
        swapped = 1;
        for(i = bottom; i < top; ++i) {
            if(less(a[i + 1], a[i])) {
                exch(a[i], a[i+1]);
                swapped = 0;
            }
        }
        --top;
        for (i = top; i > bottom; --i) {
            if(less(a[i],a[i - 1])) {
                exch(a[i], a[i-1]);
                swapped = 0;
            }
        }
        ++bottom;
    }
}