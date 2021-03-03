//
// Created by Pichau on 03/03/2021.
//

#include "item.h"

void sort(Item a[], int lo, int hi) {
    int i, j;
    for (i = 0; i < hi - 1; i++)
        for (j = 0; j < hi - i - 1; j++)
            compexch(a[j], a[j+1])
}