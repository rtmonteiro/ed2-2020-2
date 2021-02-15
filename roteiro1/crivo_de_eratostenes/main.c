#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <string.h>
#include "crivo.h"

int main(int argc, char** argv) {
    // EX: ./main 3 0 => cria um vetor de 10^3 e NÂO apresenta os primos

    if (argc < 3) {
        printf("ERRO: Digite a magnitude do vetor\n");
        printf("      e se deseja apresentar os primos\n");
        return -1;
    }
    int magnitude = atoi(argv[1]);
    int apresentaPrimos = atoi(argv[2]);

    void *a = initArray(magnitude);

    findPrimes(a, magnitude);

    if (apresentaPrimos) {
        printPrimes(a, magnitude);
    }

    return 0;
}
