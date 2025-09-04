#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vppi;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, sum = 0; cin >> n;
    vi vec(n);
    vi vec_copy(n);
    vppi pair(n);
    vppi pair_r(n);
    for (ll i=0; i<n; i++) {
        cin >> vec[i];
        vec_copy[i] = vec[i];
        sum += vec[i];
        pair[vec[i]].second++;
    }

    sort(vec.begin(), vec.end());

    ll i=0;
    while (i<n) {
    /* for (ll i=0; i<n; i++) { */
        pair_r[vec[i]].second = sum - pair[vec[i]].second*vec[i];
        sum -= pair[vec[i]].second*vec[i];
        i++;
    }

    for (int i=0; i<n; i++) {
        cout << pair_r[vec_copy[i]].second << " ";
    }

    return 0;
}