//
// Created by Pichau on 18/02/2021.
//

#ifndef BST_BST_H
#define BST_BST_H

typedef struct Bst bst;

bst *initBST();

bst * insertLeaf(bst *root, int key);

bst * deleteBST(bst *root);

void printBST(bst *root);

int getBSTHeight(bst *root);

#endif //BST_BST_H
