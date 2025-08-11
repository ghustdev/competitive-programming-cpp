#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, N, C, Q = 0, count = 1;

    cin >> A >> N;

    while (count <= A) {
        Q += 1;

        if (Q * (N + 2)  == A) {
            break;
        }
        
        count +=1;
    }

    C = Q * 2;

    cout << C << endl;

    return 0;
}