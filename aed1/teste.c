#include <stdio.h>

int main() {
    int n = 4, m = 6;
    int D[4][6] = {0};

    for (int i = 0; i < n; i++) {
        D[i][i] = i+1; // só preenche a diagonal
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ", D[i][j]);
        printf("\n");
    }
    return 0;
}