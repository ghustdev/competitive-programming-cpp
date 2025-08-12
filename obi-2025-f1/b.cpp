#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c, d;
    char valid;

    cin >> a >> b >> c >> d;

    for (int i = 1; i < 1000; i++) {
        if (a < c - d*i < b) {
            valid = 'S'; 
            break;}
        else valid = 'N';
    }

    cout << valid;
}