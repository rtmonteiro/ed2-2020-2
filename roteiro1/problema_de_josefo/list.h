//
// Created by Pichau on 16/02/2021.
//

#ifndef PROBLEMA_DE_JOSEFO_LIST_H
#define PROBLEMA_DE_JOSEFO_LIST_H

typedef struct Node {
    int key;
    struct Node *next;
} node;

void *initCircularList(int v);

#endif //PROBLEMA_DE_JOSEFO_LIST_H
