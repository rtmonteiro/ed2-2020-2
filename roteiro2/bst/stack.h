//
// Created by Pichau on 17/02/2021.
//

#ifndef PILHA_DE_DIJKSTRA_STACK_H
#define PILHA_DE_DIJKSTRA_STACK_H

typedef struct Stack stack;

stack *initStack();

void *top(stack *s);

void push(stack *s, void *value);

void *pop(stack *s);

int isEmpty(stack *s);

#endif //PILHA_DE_DIJKSTRA_STACK_H
