//
// Created by Pichau on 03/03/2021.
//

#include "item.h"

void sort(Item a[], int lo, int hi){
    for (int i = 0; i < hi; ++i) {
        int j = i - 1;
        int k = a[i];
        while (j>=0 && less(k, a[j])){
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = k;
    }
}
