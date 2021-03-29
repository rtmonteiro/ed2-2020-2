//
// Created by Pichau on 28/03/2021.
//

#include "item.h"

#define CUTOFF 2

void insert_sort(Item *a, int lo, int hi){
    for (int i = lo + 1; i <= hi; ++i) {
        int j = i - 1;
        int k = a[i];
        while (j>=lo && less(k, a[j])){
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = k;
    }
}

int partition(Item *a, int lo, int hi) {
    int i = lo, j = hi+1;
    Item v = a[lo];
    while(1) {
        while (less(a[++i], v)) if (i == hi) break;
        while (less(v, a[--j])) if (j == lo) break;
        if (i >= j) break;
        exch(a[i], a[j])
    }
    exch(a[lo], a[j])
    return j;
}

static void quick_sort(Item *a, int lo, int hi) {
    if (hi <= lo + CUTOFF - 1) {
        insert_sort(a, lo, hi);
        return;
    }
    int j = partition(a, lo, hi);
    quick_sort(a, lo, j-1);
    quick_sort(a, j+1, hi);
}

void sort(Item *a, int lo, int hi) {
    quick_sort(a, lo, hi);
}
