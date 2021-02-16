#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    int i, N, M;
    node *t, *x;
    scanf("%d %d", &N, &M);

    t = (node*) malloc(sizeof(node));
    t->key = 1;

    x = t;

    for (i = 2; i <= N ; ++i) {
        t->next = (node*)malloc(sizeof(node));
        t = t->next;
        t->key = i;
    }

    t->next = x;

    while (t != t->next) {
        for (i = 1; i < M; ++i) {
            t = t->next;
        }
        printf("%d ", t->next->key);
        x = t->next;
        t->next = t->next->next;
        free(x);
    }
    printf("%d\n", t->key);

    return 0;
}
