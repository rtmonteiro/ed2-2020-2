//
// Created by Pichau on 16/02/2021.
//

#ifndef PROBLEMA_DE_JOSEFO_LIST_H
#define PROBLEMA_DE_JOSEFO_LIST_H

typedef struct Node {
    int key;
    struct Node *next;
} node;

node *initCircularList(int v);

node *insertNextNode(node *t, int v);

void deleteNextNode(node *t);


#endif //PROBLEMA_DE_JOSEFO_LIST_H
