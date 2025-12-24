#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll l = max(a, c);
    ll r = min(b, d);

    if (l <= r) cout << l << " " << r;
    else cout << "-1";
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