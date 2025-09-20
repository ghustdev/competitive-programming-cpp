#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair_i;
typedef unordered_map <ll, ll> u_map_ll;
typedef unordered_map <string, bool> u_map_str;
typedef unordered_map <char, ll> u_map_c;


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    for (int i=0; i<t; i++)  {
        int k, x;
        cin >> k >> x;

        for (int j=0; j<k; j++) {
            if (x % 2 == 0)
                x *= 2;
            else 
                x = (x*3)+1; 
            }
        cout << x << "\n";
    }

    return 0;
}