#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll r = 1;
    r = (r * (a % 100)) % 100;
    r = (r * (b % 100)) % 100;
    r = (r * (c % 100)) % 100;
    r = (r * (d % 100)) % 100;

    if (r < 10) cout << 0;
    cout << r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}