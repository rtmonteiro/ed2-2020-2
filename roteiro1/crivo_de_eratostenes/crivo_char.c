//
// Created by Pichau on 15/02/2021.
//
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "crivo.h"

void* initArray(int magnitude) {
    int i;
    int N = (int) pow(10, magnitude);
    char* a = (char *) malloc((N + 1) * sizeof(char));

    for (a[1] = '0', i = 2 ; i <= N; i++) {
        a[i] = '1';
    }

    return a;
}

void findPrimes(void *array, int magnitude) {
    int i, j;
    int N = (int) pow(10, magnitude);
    char* a = (char *) array;

    for (i = 2; i <= N/2; i++) {
        if (a[i] == '1') {
            for (j = 2; j <= N/i; j++) {
                a[i*j] = '0';
            }
        }
    }
}

void printPrimes(void *array, int magnitude) {
    int i;
    int N = (int) pow(10, magnitude);
    char* a = (char *) array;

    for (i = 1; i <= N; ++i) {
        if (a[i] == '1') printf("%d ", i);
    }
}

