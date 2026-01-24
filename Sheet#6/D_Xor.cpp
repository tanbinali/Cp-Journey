#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll a,b,q;
    cin >> a >> b >> q;

    if (q % 3 == 1) cout << a;
    else if (q % 3 == 2) cout << b;
    else cout << (a ^ b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}