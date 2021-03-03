//
// Created by Pichau on 03/03/2021.
//
#include "item.h"

void sort(Item *a, int lo, int hi) {
    int i, j;
    for(i = 0; i < (hi - 1); i++){
        int k = i;
        for(j = i+1; j < hi; j++)
            if (less(a[j], a[k])) k = j;
        exch(a[i], a[k]);
    }
}
