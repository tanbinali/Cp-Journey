#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    ll a = 0, b = 1;

    if (n >= 1) cout << a;
    if (n >= 2) cout << " " << b;

    for (int i = 3; i <= n; i++) {
        ll c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
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