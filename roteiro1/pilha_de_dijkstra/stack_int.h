//
// Created by Pichau on 17/02/2021.
//

#ifndef PILHA_DE_DIJKSTRA_STACK_INT_H
#define PILHA_DE_DIJKSTRA_STACK_INT_H

typedef struct StackInt {
    int size;
    struct NodeInt *top;
} stackInt;

typedef struct NodeInt {
    int value;
    struct NodeInt *next;
} nodeInt;

stackInt *initStackInt();

nodeInt *newNodeInt(int value);

void pushInt(stackInt *s, int value);

int popInt(stackInt *s);

// int isEmpty(stackInt *s);

#endif //PILHA_DE_DIJKSTRA_STACK_INT_H
