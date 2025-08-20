#include <stdio.h>
#include <stdlib.h>

typedef long long int lli;

typedef struct {
    int ind;
    int val;
} esparsa;

int main()
{
    int q, i, j, contA = 0, contOutV = 0; scanf("%d", &q);
    esparsa V[q];
    int outV[q];

    for (i=0;i<q;i++) {
        char operation; scanf("\n%c", &operation);

        if (operation == 'A') {
            int ind, x; scanf("%d %d", &ind, &x);
            V[contA].ind = ind;
            V[contA].val = x;
            contA++;
        } else if (operation == 'C') {
            int ind; scanf("%d", &ind);
            int found = 0;
            for (j=0;j<contA;j++) {
                if (V[j].ind == ind) {
                    outV[contOutV++] = V[j].val;
                    found = 1;
                }
            } if (!found) {
                outV[contOutV++] = 0;
            }
        }
    }


    for (i=0;i<contA;i++)
        printf("%d - %d\n", V[i].ind, V[i].val);

    if (contOutV > 0){
        for (i=0;i<contOutV;i++)
            printf("%d\n", outV[i]);
    }
}