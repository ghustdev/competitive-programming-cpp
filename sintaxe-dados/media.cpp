#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, maior, media, mediana;
    cin >> a >> b;

    // if (a > b) swap(a, b);
    // if (a > c) swap(a, c);
    // if (b > c) swap(b, c);

    a > b ? maior = a, mediana = b : maior = b, mediana = a;

    c = 3 * mediana - a - b;

    cout << c;
}
