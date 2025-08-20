#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, i, k, higher1 = 0, higher2 = 0;
    cin >> n;
    vector<ll> a(n);

    for (i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x;
        // higher2 = higher1;
        if (a[i] > higher1) higher1 = a[i];
        if (a[i] < higher1 && a[i] > higher2) higher2 = a[i];
        else higher2 = a[i];
    }

    for (k = 0; k < n; k++)
    {
        if (a[k] == higher1) cout << higher2 << "\n";
        else if (a[k] < higher1) cout << higher1 << "\n";
    }

    return 0;
}