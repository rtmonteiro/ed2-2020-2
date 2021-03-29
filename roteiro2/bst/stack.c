//
// Created by Pichau on 17/02/2021.
//

#include <stdlib.h>
#include "stack.h"

struct Stack {
    int size;
    struct Node *top;
};

typedef struct Node {
    void *value;
    struct Node *next;
} node;

stack *initStack() {
    stack *s = (stack  *) malloc(sizeof(stack));
    s->top = NULL;
    s->size = 0;
    return s;
}

node *newNode(void *value) {
    node *new = (node  *) malloc(sizeof(node));
    new->value = value;
    new->next = NULL;
}

void push(stack *s, void *value) {
    node *n = newNode(value);
    n->next = s->top;
    s->top = n;
    s->size++;
}

void *pop(stack *s) {
    node *n = s->top;
    void *v = n->value;
    s->top = s->top->next;
    s->size--;

    free(n);
    return v;
}

int isEmpty(stack *s) {
    return !s->size;
}

void *top(stack *s) {
    return s->top ? s->top->value : NULL;
}
