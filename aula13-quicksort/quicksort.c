//
// Created by Pichau on 28/03/2021.
//

#include <stdlib.h>
#include "item.h"

#define CUTOFF 2

static int medianOf3(Item *a, int lo, int mid, int hi);
static void insert_sort(Item *a, int lo, int hi);

//static void partition_dijkstra(Item *a, int lo, int hi, int i, int j) {
//    i = lo - 1, j = hi;
//    int p = lo - 1, q = hi;
//    int v = a[hi];
//
//    while (1) {
//        while (less(a[++i], v));
//        while (less(v, a[--j])) if (j == lo) break;
//        if (i >= j) break;
//        exch(a[i], a[j])
//
//        if (a[i] == v) {
//            p++;
//            exch(a[p], a[i])
//        }
//
//        if (a[j] == v) {
//            q--;
//            exch(a[j], a[q])
//        }
//    }
//
//    exch(a[i], a[hi])
//
//    j = i - 1;
//    for (int k = lo; k < p; k++, j--) exch(a[k], a[j])
//
//    i++;
//    for (int k = hi - 1; k > q; k--, i++) exch(a[i], a[k])
//}

static int partition(Item *a, int lo, int hi) {
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
    if (hi <= lo) return; // SEM CUTOFF
// === CUTOFF ===
//    if (hi <= lo + CUTOFF - 1) {
//        insert_sort(a, lo, hi);
//        return;
//    }

// === MEDIAN OF 3 ===
//    int m = medianOf3(a, lo, lo + (hi - lo)/2, hi);
//    exch(a[lo], a[m]);

    int j = partition(a, lo, hi);
    quick_sort(a, lo, j-1);
    quick_sort(a, j+1, hi);
}

static void quick_sort_dijkstra(Item *a, int lo, int hi) {
//    if (hi <= lo) return;
//
//    int *i = (int *) malloc(sizeof(int) * 1);
//    int *j = (int *) malloc(sizeof(int) * 1);
//    partition(a, lo, hi);
//    partition_dijkstra(a, lo, hi, *i, *j);
//    quick_sort_dijkstra(a, lo, *j);
//    quick_sort_dijkstra(a, *i, hi);
}

static void insert_sort(Item *a, int lo, int hi){
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

static int medianOf3(Item *a, int lo, int mid, int hi) {
    if (a[mid] < a[lo])  exch(a[lo],  a[mid])
    if (a[hi]  < a[lo])  exch(a[lo],  a[hi] )
    if (a[hi]  < a[mid]) exch(a[mid], a[hi] )
    exch(a[mid], a[hi - 1])
    return hi - 1;
}

void sort(Item *a, int lo, int hi) {
    quick_sort(a, lo, hi);
//    quick_sort_dijkstra(a, lo, hi); // tentativa mal sucedidade de implementar o algoritmo de dijkstra
}