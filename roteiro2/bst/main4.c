//
// Created by Pichau on 18/02/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

void initClient(bst *root) {

    root = insertLeaf(root, 70);
    insertLeaf(root, 66);
    insertLeaf(root, 65);
    insertLeaf(root, 68);
    insertLeaf(root, 67);
    insertLeaf(root, 69);
    insertLeaf(root, 71);
    insertLeaf(root, 73);
    insertLeaf(root, 72);

    nonrec_stack_preorder(root, printNode);
    printf("\n");
    nonrec_stack_inorder(root, printNode);
    printf("\n");
    nonrec_stack_postorder(root, printNode);
    printf("\n");

    nonrec_stack_postorder(root, deleteNode);
}


int main(int argc, char **argv) {
    bst *root = NULL;
    initClient(root);
    return 0;
}




