//
// Created by Pichau on 15/02/2021.
//

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "crivo.h"

void *initArray(int magnitude) {
    int N = (int) pow(10, magnitude);
    char* a = (char*) malloc(N + 1);
    int i;

    for (a[0] |= 0xFC, i = 8 ; i <= N; i++) {
        a[i / 8] |= 1 << (i % 8);
    }

    return a;
}

void findPrimes(void *array, int magnitude) {
    int i, j;
    int N = (int) pow(10, magnitude);
    char *a = (char*) array;

    for (i = 2; i <= N/2; ++i) {
        if ((a[i / 8] & (1 << i % 8)) != 0) {
            for (j = 2; j <= N/i; ++j) {
                a[(i * j) / 8] &= ~(1 << ((i * j) % 8));
            }
        }
    }
}

void printPrimes(void *array, int magnitude) {
    int i;
    int N = (int) pow(10, magnitude);
    char *a = (char*) array;

    for (i = 1; i <= N; ++i) {
        if ((a[i / 8] & (1 << i % 8)) != 0) {
            printf("%d ", i);
        }
    }
}
