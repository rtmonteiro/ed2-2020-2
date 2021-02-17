#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "josefo.h"

void runProblem(int M, node *t);

int main(int argc, char** argv) {
    if (argc == 1 || argc > 3) return -1;

    int N = atoi(argv[1]);
    int M = atoi(argv[2]);
    node *t;

    t = initProblem(N);

    runProblem(M, t);

    return 0;
}
