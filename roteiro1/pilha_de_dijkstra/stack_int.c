//
// Created by Pichau on 17/02/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "stack_int.h"

stackInt *initStackInt() {
    stackInt *s = (stackInt *) malloc(sizeof(stackInt));
    s->top = NULL;
    s->size = 0;
    return s;
}

nodeInt *newNodeInt(int value) {
    nodeInt* new = (nodeInt *) malloc(sizeof(nodeInt));
    new->value = value;
    new->next = NULL;
}

void pushInt(stackInt *s, int value) {
    nodeInt *cell = newNodeInt(value);
    cell->next = s->top;
    s->top = cell;
    s->size++;
}

int popInt(stackInt *s) {
    nodeInt *n = s->top;
    int num = n->value;
    s->top = s->top->next;
    s->size--;

    n->next = NULL;
    free(n);
    return num;
}

//int isEmpty(stackInt *s) {
//    return s->size == 0;
//}
