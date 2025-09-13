#include <stdio.h>
#include <stdlib.h>

void sub_particoes(int i, int sum);

int *v;
int n;
int count = 0;
int tam_logic = 0;
int sum = 0;

int main() 
{ 
    scanf("%d", &n);

    v = (int *) calloc(n, sizeof(int));

    sub_particoes(0, 0);

    printf("%d", count);

    free(v);

    return 0;
}

void sub_particoes(int i, int sum) {
    printf("valores: \n");      
    for (int i=0; i<n; i++) {
        printf("%d ", v[i]);
        sum += v[i];
    }
    printf("\n");
    if (sum == n) {
        count++;
        return;
    }
    if (sum > n) return;
    // 4 -> 5 casos: 
    // 4
    // 3 + 1
    // 2 + 2
    // 2 + 1 + 1
    // 1 + 1 + 1 + 1
    for (int value=n; value>0; value--) {
        v[i] = value;
        sub_particoes(i, sum);
        v[i] = value - 1;
        v[i+1] = value;
        sub_particoes(i + 1, sum);
    }
}

//leroyzin was here :)