//
// Created by Pichau on 15/02/2021.
//

#ifndef CRIVO_DE_ERATOSTENES_CRIVO_CB_H
#define CRIVO_DE_ERATOSTENES_CRIVO_CB_H

void* initArray(int magnitude, void (*callback)());

void findPrimes(void* array, int magnitude, void (*callback)());

void printPrimes(void *array, int magnitude, void (*callback)());

#endif //CRIVO_DE_ERATOSTENES_CRIVO_CB_H
