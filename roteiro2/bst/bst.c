//
// Created by Pichau on 18/02/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bst.h"
#include "stack.h"

struct Bst {
    int key;
    bst* left;
    bst* right;
};

bst *initBST(int key) {
    bst *new = (bst *) malloc(sizeof(bst));
    new->key = key;
    new->left = new->right = NULL;
    return new;
}

bst *insertLeaf(bst *root, int key) {
    if (root == NULL) {
        return initBST(key);
    }
    // a chave de root é maior q todas as chaves das sub-árvores da esquerda
    if (key > root->key ) {
        root->right = insertLeaf(root->right, key);
    // a chave de root é menor q todas as chaves das sub-árvores da direita
    } else if (key < root->key ) {
        root->left = insertLeaf(root->left, key);
    }

    return root;
}

bst *deleteBST(bst *root) {
    if ( root->left != NULL ) {
        root->left = deleteBST(root->left);
    }
    if ( root->right != NULL ){
        root->right = deleteBST(root->right);
    }
    free(root);
    return NULL;
}

void deleteNode(bst *root) {
    free(root);
}

void printBST(bst *root) {
    if ( root != NULL ) {
        printBST(root->left);
        printf("%d ", root->key);
        printBST(root->right);
    }
}

void printNode(bst *root) {
    printf("%d ", root->key);
}

int getBSTHeight(bst *root) {
    if (root == NULL) return -1;
    else return (int) fmax( getBSTHeight(root->left), getBSTHeight(root->right) ) + 1;
}

void rec_preorder(bst *t, void (*visit)(bst *)) {
    visit(t);
    if (t->left != NULL) {
        rec_preorder(t->left, visit);
    }
    if (t->right != NULL) {
        rec_preorder(t->right, visit);
    }
}

void rec_inorder(bst *t, void (*visit)(bst *)) {
    if (t->left != NULL) {
        rec_inorder(t->left, visit);
    }
    visit(t);
    if (t->right != NULL) {
        rec_inorder(t->right, visit);
    }
}

void rec_postorder(bst *t, void (*visit)(bst *)) {
    if (t->left != NULL) {
        rec_postorder(t->left, visit);
    }
    if (t->right != NULL) {
        rec_postorder(t->right, visit);
    }
    visit(t);
}

void nonrec_stack_preorder(bst *root, void (*visit)(bst *)) {
    if (root == NULL) return;
    stack *s = initStack();
    bst *t = root;
    push(s, t);

    while (!isEmpty(s)) {
        t = (bst *) pop(s);
        visit(t);

        if (t->right) push(s, t->right);
        if (t->left) push(s, t->left);
    }
    free(s);
}

void nonrec_stack_inorder(bst *root, void (*visit)(bst *)) {
    int done = 0;
    stack *s = initStack();
    bst *t = root;
    while (!done) {
        if (t != NULL) {
            push(s, t);
            t = t->left;
        }
        else {
            if (!isEmpty(s)) {
                t = (bst *) pop(s);
                visit(t);
                t = t->right;
            } else {
                done = 1;
            }
        }
    }
    free(s);
}

void nonrec_stack_postorder(bst *root, void (*visit)(bst *)) {
    if (root == NULL) return;
    stack *s = initStack();
    bst *t = root;

    do {
        while (t) {
            if (t->right) push(s, t->right);
            push(s, t);

            t = t->left;
        }

        t = pop(s);

        if (t->right && top(s) == t->right) {
            pop(s);
            push(s, t);
            t = t->right;
        }
        else {
            visit(t);
            t = NULL;
        }
    } while (!isEmpty(s));
    free(s);
}








