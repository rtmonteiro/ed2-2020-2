//
// Created by Pichau on 17/02/2021.
//

#ifndef PILHA_DE_DIJKSTRA_STACK_CHAR_H
#define PILHA_DE_DIJKSTRA_STACK_CHAR_H

typedef struct StackChar {
    int size;
    struct NodeChar *top;
} stackChar;

typedef struct NodeChar {
    char value;
    struct NodeChar *next;
} nodeChar;

stackChar *initStackChar();

nodeChar *newNodeChar(char value);

void pushChar(stackChar *s, char value);

char popChar(stackChar *s);

// int isEmpty(stackChar *s);

#endif //PILHA_DE_DIJKSTRA_STACK_CHAR_H
