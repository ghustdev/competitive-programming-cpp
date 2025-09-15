#include <stdio.h>
#include <stdlib.h>

int n;
int valid = 0;

void caminho(int labirinto[][n], int col, int row, int linha, int coluna);

int main() 
{
    scanf("%d", &n);

    int labirinto[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) 
            sacnf("%d", labirinto[i][j]);
    }

    int col[n];
    int row[n];

    caminho(labirinto, col, row, 0, 0);

    return 0;
}

void caminho(int labirinto[][n], int col, int row, int linha, int coluna) {
    if (linha == n && coluna == n) 
        return valid; 
    
}