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

    sub_particoes(n, 0);

    printf("%d", count);

    free(v);

    return 0;
}

void add_num(int num) {
    v[tam_logic] = num;
    tam_logic++;
}

void remove_num(int num) {
    tam_logic--;
}

void sub_particoes(int i, int sum) {
    for (int i=0; i<tam_logic; i++) {
        printf("valores: %d", v[i]);
        sum += v[i];
    }
    printf("\n");
    if (sum == n) {
        printf("soma: %d\n", sum);
        count++;
    } else {
        for (int value=1; value<=n; value++) {
            sub_particoes(i, sum);
            // sum = 0;
            sub_particoes(i - 1, sum);
        }
    }
}

//leroyzin was here :)