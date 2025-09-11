#include <stdio.h>
#include <stdlib.h>

void sub_particoes(int i);

int *v;
int *v_permutation;
int n;
int tam = 0;

int main() 
{ 
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));
    v_permutation = (int *) malloc(n * sizeof(int));

    for (int i=0; i<n; i++) { 
        v[i] = i+1;
    }

    sub_particoes(0);

    free(v);
    free(v_permutation);

    return 0;
}

void push_back_permutation(int x) {
    v_permutation[tam] = x;
    tam++;
}

void pop_back_permutation() {
    tam--;
}

void sub_particoes(int i) {
    if (i == n) {
        for (int j=0; j<i; j++)
            printf("%d ", v_permutation[j]);
        printf("\n");
        return;
    } 
    sub_particoes(i + 1);
    push_back_permutation(v[i]);
    sub_particoes(i + 1);
    pop_back_permutation();
}

//leroyzin was here :)