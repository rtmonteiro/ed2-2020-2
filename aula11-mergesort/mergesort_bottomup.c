//
// Created by monte on 23/03/2021.
//

#include <stdlib.h>
#include "item.h"

#define CUTOFF 10

void insert_sort(Item *a, int lo, int hi){
    for (int i = lo + 1; i < hi; ++i) {
        int j = i - 1;
        int k = a[i];
        while (j>=lo && less(k, a[j])){
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = k;
    }
}

static void merge(Item *a, Item *aux, int lo, int mid, int hi) {
    if (hi <= lo + CUTOFF - 1) {
        insert_sort(a, lo, hi);
        return;
    }
    for (int k = lo; k < hi; ++k) aux[k] = a[k];
    int i = lo, j = mid;
    for (int k = lo; k < hi; ++k) {
        if      (i >= mid)                    a[k] = aux[j++];
        else if (j >= hi)                     a[k] = aux[i++];
        else if (less(aux[j], aux[i]))  a[k] = aux[j++];
        else                                  a[k] = aux[i++];
    }
}

void sort(Item *a, int lo, int hi) {
    int N = (hi - lo);
    Item *aux = malloc(sizeof(Item) * N);
    for (int size = 1; size < N; size = 2*size) {
        for (int i = 0; i < N; i = i + 2*size) {
            int left, middle, right;
            left = i;
            middle = i + size < N ? i + size : N;
            right = i + 2*size < N ? i + 2*size : N;
            merge(a, aux, left, middle, right);
        }
    }
    free(aux);
}