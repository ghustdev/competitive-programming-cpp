#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll q, i, j, count1 = 0, count = 0;
    cin >> q;
    vector<ll> vet(q), outputs(q);

    for (i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if (type == 1) {
            ll x; cin >> x;
            int yep = 0;
            for (j = 0; j < count1; j++) {
                if (vet[j] == x) {
                    yep++;
                }
            }
            if (!yep) {
                vet[count1] = x;
                count1++;
            }
        } else if (type == 2) {
            ll x; cin >> x;
            for (j = 0; j < count1; j++) {
                if (vet[j] == x) {
                    vet[j] = 0;
                }
            }
        } else {
            ll count = 0;
            for (j = 0; j < count1; j++) {
                if (vet[j] > 0)
                    count++;
            }
            cout << count << "\n";
        }
    }

    return 0;
}