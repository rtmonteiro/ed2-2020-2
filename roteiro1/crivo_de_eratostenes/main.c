#include <stdio.h>
#include <time.h>

// #define N 4194304 // char
// #define N 2097152 // int
#define N 2000000 // int
// #define N 1000

int main() {
    int i, j;
    int a[N+1];
    for (a[1] = 0, i = 2 ; i <= N; i++) a[i] = 1;

    clock_t start = clock();
    for (i = 2; i <= N/2; i++) {
        if(a[i] == 1) {
            for (j = 2; j <= N/i; j++) {
                a[i*j] = 0;
            }
        }
    }
    clock_t end = clock();

    for (int i = 1; i <= N; ++i) {
        if (a[i] == 1) printf("%d ", i);
    }

    printf("\n");
    double seconds = (( double ) end - start ) / CLOCKS_PER_SEC ;
    printf (" tempo em segundos: % lf \n" , seconds );


    return 0;
}
