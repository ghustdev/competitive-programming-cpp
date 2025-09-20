#include <stdio.h>
#include <stdlib.h>

int binarySearch(int ini, int fin, int c) {
    if (ini > fin) return 0;

    int mid = (fin + ini)/2 ;
    if (c > vectN[mid]) return binarySearch(mid+1, fin, c);
    else if (c < vectN[mid]) return binarySearch(ini, mid-1, c);

    return 1;
}

int main()
{
    int N, Q; scanf("%d %d", &N, &Q);
    int mat[N][N];

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++)
            scanf("%d", &mat[i][j]);
    }    

    for (int i=0; i<Q; i++) {
        int consult; scanf("%d", &consult);

        printf("%d\n", binarySearch(ini, fin, consult));
    }

    return 0;
}