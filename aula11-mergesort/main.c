#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main(int argc, char *argv[]) {

    int N = (int) strtol(argv[1], NULL, 10);
    char *FILENAME = argv[2];

    Item *a = (Item *) malloc(sizeof(Item) * N);

    FILE *fp = fopen(FILENAME, "r");
    if (!fp) {
        fprintf(stderr, "Error opening file '%s'\n", FILENAME);
        return EXIT_FAILURE;
    }

    char *line_buf = NULL;
    size_t line_buf_size = 0;

    for (int i = 0; i < N; ++i) {
        getline(&line_buf, &line_buf_size, fp);
        a[i] = (Item) strtol(line_buf, NULL, 10);
    }
    free(line_buf);

    sort(a, 0, N);

    free(a);

    return 0;
}

