//
// Created by Pichau on 18/02/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

void initClient(bst *root, int N) {
    srand(time(NULL));
    int r;

    r = rand();
    root = insertLeaf(root, r);
    for (int i = 0; i < N - 1; ++i) {
        r = rand();
        insertLeaf(root, r);
    }

    printf("%d\n", getBSTHeight(root));

    root = deleteBST(root);
}


int main(int argc, char **argv) {
    int N = (int) strtol(argv[1], NULL, 10);
    bst *root = NULL;
    for (int i = 0; i < 10; ++i) {
        initClient(root, N);
    }

    return 0;
}


