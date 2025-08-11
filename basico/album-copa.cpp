#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, M, i, k, count;

    cin >> N >> M;
    
    int resto = N;
    int X[M], newX[M];

    for (i = 0; i < M; i++) {
        cin >> X[i];
    }
    
    for (i = 0; i < M; i++) {
        count = 0;
        for (k = 0; k < M; k++) {
            X[k] == X[i] ? count += 1 : count += 0;
        }
        for (k = 0; k < M; k++) {
            if (count > 1 && newX[k] != newX[i]) 
                newX[i] = newX[k];
                resto -= 1;
        }
    }

    cout << resto;

    return 0;
}
