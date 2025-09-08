#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair;
typedef unordered_map <ll, ll> u_map;

void back_queen(int y);
void setup();

v_i cols; v_i dig1; v_i dig2;
ll count_q = 0;
int n;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    setup();

    back_queen(0);

    cout << count_q;

    return 0;
}

void back_queen(int y) {
    if (y==n) {
        count_q++;
        return;
    }
    for (int x=0; x<n; x++) {
        if (cols[x] || dig1[x+y] || dig2[x-y+n-1]) continue;
        cols[x] = dig1[x+y] = dig2[x-y+n-1] = 1;
        back_queen(y+1);
        cols[x] = dig1[x+y] = dig2[x-y+n-1] = 0;
    }
}

void setup() {
    cols = v_i(n);
    dig1 = v_i(2*n - 1);
    dig2 = v_i(2*n - 1);
}