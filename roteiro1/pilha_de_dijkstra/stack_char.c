//
// Created by Pichau on 17/02/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "stack_char.h"

stackChar *initStackChar() {
    stackChar *s = (stackChar *) malloc(sizeof(stackChar));
    s->top = NULL;
    s->size = 0;
    return s;
}

nodeChar *newNodeChar(char value) {
    nodeChar* new = (nodeChar *) malloc(sizeof(nodeChar));
    new->value = value;
    new->next = NULL;
}

void pushChar(stackChar *s, char value) {
    nodeChar *cell = newNodeChar(value);
    cell->next = s->top;
    s->top = cell;
    s->size++;
}

char popChar(stackChar *s) {
    nodeChar *n = s->top;
    char op = '0' + n->value;
    s->top = s->top->next;
    s->size--;

    n->next = NULL;
    free(n);
    return op - '0';
}

//int isEmpty(stackChar *s) {
//    return s->size == 0;
//}

#include "stack_char.h"
