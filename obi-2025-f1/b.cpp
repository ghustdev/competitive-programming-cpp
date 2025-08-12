#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c, d;
    char valid;

    cin >> a >> b >> c >> d;

    for (int i = 1; i < 100; i++) {
        if ((c - d*i) <= b && (c - d*i) >= a) {
            valid = 'S'; 
            break;
        } else valid = 'N';
    }

    cout << valid;
}