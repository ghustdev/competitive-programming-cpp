#include <stdio.h>

typedef long long int ll;

void positions(ll j);

ll count = 0;
int n;

int main()
{
    scanf("%d", &n);

    positions(0ll);

    return 0;
}

void positions(ll j) {
    if (j == n) {
        count++;
        return;
    }
}