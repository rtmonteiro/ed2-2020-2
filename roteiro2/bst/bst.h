//
// Created by Pichau on 18/02/2021.
//

#ifndef BST_BST_H
#define BST_BST_H

typedef struct Bst bst;

bst *initBST();

bst * insertLeaf(bst *root, int key);

bst * deleteBST(bst *root);

void deleteNode(bst *root);

void printBST(bst *root);

void printNode(bst *root);

int getBSTHeight(bst *root);

void rec_preorder(bst *t, void (*visit)(bst *));

void rec_inorder(bst *t, void (*visit)(bst *));

void rec_postorder(bst *t, void (*visit)(bst *));

#endif //BST_BST_H
