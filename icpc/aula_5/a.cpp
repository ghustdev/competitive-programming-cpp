#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<ll> v_ll;
typedef vector<pair<int, int>> v_pair_i;
typedef vector<pair<long, long>> v_pair_ll;
typedef unordered_map<ll, ll> u_map_ll;
typedef map<ll, ll> map_ll;
typedef unordered_map<int, int> u_map_ii;
typedef unordered_map<string, bool> u_map_str;
typedef unordered_map<char, ll> u_map_c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    map_ll mp;

    bool is = false;
    for (ll i = 0; i < n; i++)
    {
        ll in;
        cin >> in;

        if (mp.find(in) != mp.end()) {
            cout << mp[in]+1 << " " << i+1;
            is = true;
            break;
        }
        
        mp[x - in] = i;
    }

    
    if (!is)
        cout << "IMPOSSIBLE";

    return 0;
}