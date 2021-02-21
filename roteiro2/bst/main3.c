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

    printf("PREORDER callback\n");
    rec_preorder(root, printNode);
    printf("\n");
    printf("70 66 65 68 67 69 71 73 72\n");
    printf("\n");
    printf("INORDER callback\n");
    rec_inorder(root, printNode);
    printf("\n");
    printBST(root);
    printf("\n");
    printf("\n");
    printf("POSTORDER callback\n");
    rec_postorder(root, printNode);
    printf("\n");
    printf("65 67 69 68 66 72 73 71 70\n");
    printf("\n");

    rec_postorder(root, deleteNode);
    // root = deleteBST(root);
}


int main() {
    // ./main
    bst *root = NULL;
    initClient(root);

    return 0;
}




