//
// Created by Pichau on 18/02/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"


int main() {

    bst *root = NULL;
    root = insertLeaf(root, 3);
    insertLeaf(root, 2);
    insertLeaf(root, 4);
    insertLeaf(root, 7);
    insertLeaf(root, 6);
    insertLeaf(root, 8);

    printBST(root);

    root = deleteBST(root);

    return 0;
}


