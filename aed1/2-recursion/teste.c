#include <stdio.h>

int main() 
{
    int *v;
    int n = 3, x = 5;
    v = (int *) malloc(n * sizeof(int));

    v[0] = 1;
    v[2] = 2;
    v[3] = 3;

    v = (int *) realloc(v, x * sizeof(int));

    for (int i=0; i<x; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}