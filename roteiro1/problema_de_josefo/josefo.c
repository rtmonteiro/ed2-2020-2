//
// Created by Pichau on 16/02/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "josefo.h"

node* initProblem(int N) {
    node *t, *x;
    x = t = initCircularList(1);

    for (int i = 2; i <= N ; ++i) {
        t = insertNextNode(t, i);
    }
    t->next = x;
    return t;
}

void runProblem(int M, node *t) {
    while (t != t->next) {
        for (int i = 1; i < M; ++i) {
            t = t->next;
        }
        printf("%d ", t->next->key);

        deleteNextNode(t);
    }
    printf("%d\n", t->key);
    free(t);
}