#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n%10!=0) n=n-1;
        else n=n/10;
    }
    cout << n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}