#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair;
typedef unordered_map <ll, ll> u_map;

void hanoi(int n, int orig, int aux, int dest);

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int TESTS = 3;

    while (TESTS-- > 0) {
        int n; cin >> n;
        int orig = 1, aux = 2, dest = 3;

        cout << ((1<<n) - 1) << "\n";

        hanoi(n, orig, aux, dest);
    }

    return 0;
}

void hanoi(int n, int orig, int aux, int dest) {
    if (n==1) {
        cout << orig << " " << dest << "\n";
        return;
    }
    // Movo os n-1 da orig -> aux em 2^(n-1)-1 movimentos
    hanoi(n-1, orig, dest, aux);
    // Movo o disco de orig -> dest
    cout << orig << " " << dest << "\n";
    // Movo os n-1 do aux -> dest em 2^(n-1)-1 movimentos
    hanoi(n-1, aux, orig, dest);
}