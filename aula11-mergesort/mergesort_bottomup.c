//
// Created by monte on 23/03/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "item.h"

static void merge(Item *a, Item *aux, int lo, int mid, int hi) {
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
            printf("lo: %d mid: %d hi: %d\n", left, middle, right);
            merge(a, aux, left, middle, right);
        }
        printf("======\n");
    }
}