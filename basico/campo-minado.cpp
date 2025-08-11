#include <bits/stdc++.h>

using namespace std;

int campo[55];

int main()
{
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> campo[i]; // recebo os valores em todas as posições de 0 até n - 1
    }
    for (i = 1; i <= n; i++) {
        cout << (campo[i] + campo[i + 1] + campo[i - 1]) << "\n";
    }
}
